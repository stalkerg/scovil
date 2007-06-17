#ifndef I_OPTIONS
#define I_OPTIONS

void set_options(unsigned short win_w, unsigned short win_h,
			 unsigned short bit, short double_buffer, short fullscreen);
void set_caption(char *name, char *long_name);
void set_fps_limiter(int limit);
void *init_cycle();
void *get_null();

#endif

