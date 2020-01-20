/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbednar <rbednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 11:57:30 by rbednar           #+#    #+#             */
/*   Updated: 2019/10/15 20:29:48 by rbednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int		ft_round2(char **prec_c, int prec, int carry)
{
	if (carry == 1)
		prec--;
	while (prec >= 0 && carry > 0)
		if (((*prec_c)[prec--] += carry) > '9')
		{
			carry = 1;
			(*prec_c)[prec + 1] = '0';
		}
		else
			carry = 0;
	return (carry > 0);
}

static void		ft_round(char **main, char **prec_c, int prec)
{
	char	*tmp;

	if ((*prec_c)[prec] >= '5')
	{
		if (ft_round2(prec_c, prec, 5))
			if (ft_round2(main, ft_strlen_pf(*main), 1))
			{
				tmp = *main;
				*main = ft_strjoin_pf("1", tmp);
				free(tmp);
			}
	}
	tmp = *prec_c;
	*prec_c = ft_strndup_pf(tmp, prec);
	free(tmp);
}

static char		*ft_ldouble(int s, int e, unsigned long long m, int prec)
{
	int				tmp;
	char			*main;
	char			*frac;

	if (e == 0 && m == 0)
		ft_zero_m_e(&main, &frac);
	else if (e - 16383 >= 0 && e - 16383 < 64)
		ft_bigint_ulong(e, m, &main, &frac);
	else if ((e - 16383 < 0) || (e - 16383 > 63))
		ft_max_min_bigint(e, m, &main, &frac);
	if ((tmp = ft_strlen_pf(frac)) > prec)
		ft_round(&main, &frac, prec);
	else if (tmp < prec)
		ft_len_frac_more_prec(tmp, prec, &frac);
	prec != 0 && s == 1 ? main = ft_un(main, "-") : 0;
	prec != 0 ? main = ft_un(main, ".") : 0;
	prec != 0 ? main = ft_un(main, frac) : 0;
	free(frac);
	return (main);
}

char			*ft_float_f(long double f, int precision)
{
	int					s;
	long long			e;
	unsigned long long	m;

	if (f == 1.0 / 0.0)
		return (ft_strndup_pf("inf", 3));
	if (f == -1.0 / 0.0)
		return (ft_strndup_pf("-inf", 4));
	if (f != f)
		return (ft_strndup_pf("nan", 3));
	s = ((*(t_uint128 *)&f) >> 79) & 1;
	e = ((*(t_uint128 *)&f) >> 64) & 0x7FFF;
	m = (*(t_uint128 *)&f) & 0xFFFFFFFFFFFFFFFF;
	return (ft_ldouble(s, e, m, precision));
}
