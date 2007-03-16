#include <SDL.h>
#include <iostream>
#include <string>
#include <GL/gl.h>
#include "init.h"
#include "main_cycle.h"

namespace scovil
	{
	static options *cur_options;

	void set_options(unsigned short win_w, unsigned short win_h, unsigned short bit, bool double_buffer, bool fullscreen)
		{
		cur_options = new options;
		cur_options->win_w = win_w;
		cur_options->win_h = win_h;
		cur_options->bit = bit;
		cur_options->double_buffer=fullscreen;
		cur_options->fullscreen=fullscreen;
		}

	void set_caption(std::string name, std::string long_name)
		{
		cur_options->name = name;
		cur_options->long_name = long_name;
		}

	SDL_Thread *init_cycle()
		{
		SDL_Thread *thread_cycle;
		thread_cycle=SDL_CreateThread(main_cycle, NULL);
		return thread_cycle;
		}

	options *get_options()
		{
		return cur_options;
		}
	}


