#ifndef OBJECT_INIT
#define OBJECT_INIT

#include <string>
#include <SDL_thread.h>
#include "object.h"

namespace scovil
	{

	struct options
		{
		unsigned short win_h, win_w, bit;
		bool double_buffer, fullscreen;
		std::string name, long_name;
		};

	void set_options(unsigned short win_w, unsigned short win_h,
			 unsigned short bit, bool double_buffer, bool fullscreen);
	void set_caption(std::string name, std::string long_name);
	options *get_options();
	SDL_Thread *init_cycle();
	}
#endif
