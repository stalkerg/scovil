#include <SDL.h>
#include <GL/gl.h>
#include "main_cycle.h"
#include "init.h"

object *main_object = NULL;

int main_cycle(void *unused)
	{
	SDL_Init(SDL_INIT_VIDEO);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
	SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 5);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 6);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 5); 
	int option = SDL_OPENGL;
	if(get_options()->double_buffer)
		option = option | SDL_DOUBLEBUF;
	if(get_options()->fullscreen)
		option = option | SDL_FULLSCREEN;
	SDL_SetVideoMode(get_options()->win_w, get_options()->win_h, get_options()->bit, option);
	SDL_EnableUNICODE(1);

	#ifdef __unix__
	#else
	typedef void (APIENTRY * WGLSWAPINTERVALEXT) ( int ) ;
	WGLSWAPINTERVALEXT wglSwapIntervalEXT =
	(WGLSWAPINTERVALEXT) wglGetProcAddress( "wglSwapIntervalEXT" ) ;
	if ( wglSwapIntervalEXT != 0 ) 
		{
		// Disable vertical synchronisation :
		wglSwapIntervalEXT(0) ;
		}
	#endif
	glEnable(GL_POINT_SMOOTH);
	glEnable (GL_BLEND);
	glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_ALPHA_TEST);

	int done=1;
	while(done)
		{
		SDL_Event event;
		while(SDL_PollEvent(&event))
			{
			switch(event.type)
				{
				case SDL_QUIT:
					done = 0;
					break;
				case SDL_KEYDOWN:
					if ( event.key.keysym.sym == SDLK_ESCAPE )
						{
						done = 0;
						}
				}
			}
		if(main_object)
			{
			main_object->draw();
			SDL_GL_SwapBuffers();
			}
		}
	
	return 0;
	}

void set_head_object(object *in_object)
	{
	main_object = in_object;
	}

