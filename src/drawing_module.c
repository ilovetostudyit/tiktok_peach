/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing_module.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mplutarc <mplutarc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:20:06 by mplutarc          #+#    #+#             */
/*   Updated: 2020/02/05 19:20:17 by mplutarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

void drawing_main(char *argum)
{
    int winw, winh;
    SDL_Window		*win;
    SDL_Renderer *rend;
    SDL_Event event;
    Uint32		render_flags;
    SDL_Texture		*fillscreen;
    const Uint8	*keykey;
    int  done;
    
    printf("%s\n", argum);
    winw = 500;
    winh = 500;
    win = SDL_CreateWindow("test_window",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
    winw, winh, 0);
    render_flags = SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC;
	  rend = SDL_CreateRenderer(win, -1, render_flags);
    fillscreen = SDL_CreateTexture(rend,
		SDL_PIXELFORMAT_RGB888,
		SDL_TEXTUREACCESS_TARGET, winw, winh);
    done = 0;
    while (done != 1)
    {
      keykey = SDL_GetKeyboardState(NULL);
      SDL_PollEvent(&event);
      event.type == SDL_QUIT ? done = 1 : 0;
      event.key.keysym.scancode == SDL_SCANCODE_ESCAPE ?
		  done = 1 : 0;
      SDL_UpdateTexture(fillscreen, NULL, 0, winw * 4);
      SDL_SetRenderDrawColor(rend, 0, 0, 0, SDL_ALPHA_OPAQUE);
      SDL_RenderCopy(rend, fillscreen, NULL,
      NULL);
      SDL_RenderPresent(rend);
      SDL_RenderClear(rend);
    }
}

void	draw(void)
{
	 if (SDL_Init(SDL_INIT_VIDEO) == 0) {
        SDL_Window* window = NULL;
        SDL_Renderer* renderer = NULL;

        if (SDL_CreateWindowAndRenderer(WINW, WINH, 0, &window, &renderer) == 0) {
            SDL_bool done = SDL_FALSE;

            while (!done) {
                SDL_Event event;

                SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
                SDL_RenderClear(renderer);

				SDL_SetRenderDrawColor(renderer, 0, 255, 255, SDL_ALPHA_OPAQUE);
				for (size_t i = 1; i < 4; i++)
				{
					SDL_RenderDrawLine(renderer, 320 * i, 200 * i, 300 * i, 240 * i);
					SDL_RenderDrawLine(renderer, 300 * i, 240 * i, 340 * i, 240 * i);
                	SDL_RenderDrawLine(renderer, 340 * i, 240 * i, 320 * i, 200 * i);
				}
				SDL_RenderPresent(renderer);
                // SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
                // SDL_RenderDrawLine(renderer, 320, 200, 300, 240);
                // SDL_RenderDrawLine(renderer, 300, 240, 340, 240);
                // SDL_RenderDrawLine(renderer, 340, 240, 320, 200);
                // SDL_RenderPresent(renderer);

                while (SDL_PollEvent(&event)) {
                    if (event.type == SDL_QUIT) {
                        done = SDL_TRUE;
                    }
                }
            }
        }
        if (renderer) {
            SDL_DestroyRenderer(renderer);
        }
        if (window) {
            SDL_DestroyWindow(window);
        }
    }
    SDL_Quit();
}