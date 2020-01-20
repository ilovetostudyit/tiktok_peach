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