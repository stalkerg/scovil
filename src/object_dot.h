#ifndef OBJECT_DOT
#define OBJECT_DOT

#include "object.h"
#include "mathlib.h"
#include <list>

namespace scovil
	{
	class object_dot: public object
		{
		void default_num();
		std::list<object_container>::iterator object_iterator;
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
		vec3 cord;
		vec3 mat_cord;
		color4 color;
		GLint size;
		bool cord_change, mat_cord_change, color_change, size_change;
		void default_num();
		public:
		object_change_dot();
		object_change_dot(object_dot *in_object_dot);
		object_dot *body_object_dot;
		void set_cord(vec3 in_cord);
		void set_mat_cord (vec3 in_mat_cord);
		void set_color(color4 in_color);
		void set_size(GLint in_size);
		void set_upper_object(object *in_object);
		
		virtual void apply();
		};
	}
#endif

