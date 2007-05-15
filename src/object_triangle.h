#ifndef OBJECT_TRIANGLE
#define OBJECT_TRIANGLE

#include "object.h"
#include "mathlib.h"
#include <list>

namespace scovil
	{
	class object_triangle: public object
		{
		void default_num();
		public:
		vec3 cord1, cord2, cord3, mat_cord;
		color4 color1, color2, color3;
		quat direction;
		mat4 rot_mat;
		object_triangle(vec3 in_cord1, vec3 in_cord2, vec3 in_cord3);
		object_triangle();
		virtual void draw();
		void draw_body(bool notall=true);
		void draw_all();
		};
	
	
	class  object_change_triangle: public object_change
		{
		vec3 cord1, cord2, cord3, mat_cord;
		quat direction;
		color4 color1, color2, color3;
		bool direction_change, cord1_change, cord2_change, cord3_change, mat_cord_change, color1_change, color2_change, color3_change;
		void default_num();
		public:
		object_change_triangle();
		object_change_triangle(object_triangle *in_object_triangle);
		object_triangle *body_object_triangle;
		void set_cord1(vec3 in_cord1);
		void set_cord2(vec3 in_cord2);
		void set_cord3(vec3 in_cord3);
		void set_mat_cord(vec3 in_mat_cord);
		void set_direction(quat in_direction);
		void set_color1(color4 in_color1);
		void set_color2(color4 in_color2);
		void set_color3(color4 in_color3);
		void set_upper_object(object *in_object);
		
		virtual void apply();
		};


	}
#endif
