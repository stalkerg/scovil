#ifndef OBJECT_LINE
#define OBJECT_LINE

#include "object.h"
#include "mathlib.h"
#include <list>

namespace scovil
	{
	class object_line: public object
		{
		void default_num();
		public:
		vec3 start, end,  mat_cord;
		color4 start_color, end_color;
		GLint width;
		object_line(vec3 in_start, vec3 in_end);
		object_line();
		virtual void draw();
		void draw_body();
		void draw_all();
		};
	
	class  object_change_line:public object_change
		{
		vec3 start;
		vec3 end;
		vec3 mat_cord;
		color4 start_color;
		color4 end_color;
		GLint width;
		bool start_change, end_change, mat_cord_change, start_color_change, end_color_change, width_change;
		void default_num();
		public:
		object_change_line();
		object_change_line(object_line *in_object_line);//?
		object_line *body_object_line;//?
		void set_start(vec3 in_start);
		void set_end(vec3 in_end);
		void set_mat_cord(vec3 in_mat_cord);
		void set_start_color(color4 in_start_color);
		void set_end_color(color4 in_end_color);
		void set_width(GLint in_width);
		void set_upper_object(object *in_object);

		virtual void apply();
		};


}







#endif
