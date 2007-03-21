%module pyscovil

%{
#include "../scovil.h"

%}

#include "cstring.i"
#include "std_string.i"
#include "../mathlib.h"

void SDL_WaitThread(SDL_Thread *thread, int *status);

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
	int *get_null();


	class object
		{
		public:
		
		void add_object(object *in_object);
		void del_object(object *in_object);
		};

	class object_change
		{
		public:
		object *body_object_null, *upper_object;
		bool upper_object_change;
		virtual void apply();
		};

	void set_head_object(object *in_object);
	void add_change(object_change *in_change);

	class object_dot: public object
		{
		public:
		vec3 cord, mat_cord;
		color4 color;
		GLint size;
		object_dot(vec3 point);
		object_dot();
		virtual void draw();
		void draw_body();
		void draw_all();
		};

	class  object_change_dot:public object_change
		{
		public:
		object_change_dot();
		object_change_dot(object_dot *in_object_dot);
		object_dot *body_object_dot;
		void set_cord(vec3 in_cord);
		void set_mat_cord (vec3 in_mat_cord);
		void set_color(color4 in_color);
		void set_size(int in_size);
		void set_upper_object(object *in_object);
		
		virtual void apply();
		};

	class object_scene : public object
		{
		public:
		vec2 resolution;
		GLdouble near, far, aspect;
		object_scene();
		virtual void draw();
		};

	}