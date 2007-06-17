#include "./options.h"
#include "../init.h"
#include "../main_cycle.h"

void set_options(unsigned short win_w, unsigned short win_h,
			 unsigned short bit, short double_buffer, short fullscreen)
	{
	scovil::set_options(win_w, win_h, bit, double_buffer, fullscreen);
	}

void set_caption(char *name, char *long_name)
	{
	scovil::set_caption(name, long_name);
	}

void *init_cycle()
	{
	return scovil::init_cycle();
	}

void *get_null()
	{
	return NULL;
	}

void set_fps_limiter(int limit)
	{
	scovil::set_fps_limiter(limit);
	}
