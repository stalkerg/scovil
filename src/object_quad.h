#ifndef OBJECT_QUAD
#define OBJECT_QUAD

#include "object.h"
#include "mathlib.h"
#include <list>

namespace scovil
	{
	class object_quad: public object
		{
		void default_num();
		public:
		vec3 cord1, cord2, cord3, cord4, mat_cord;
		color4 color_cord1, color_cord2, color_cord3, color_cord4;
		quat direction;
		mat4 rot_mat;
		object_quad(vec3 in_cord1, vec3 in_cord2, vec3 in_cord3, vec3 in_cord4);
		object_quad();
		virtual void draw();
		void draw_body(bool notall=true);
		void draw_all();
		};
	
	
	class  object_change_quad: public object_change
		{
		vec3 cord1, cord2, cord3, cord4, mat_cord;
		quat direction;
		color4 color_cord1, color_cord2, color_cord3, color_cord4;
		bool direction_change, cord1_change, cord2_change, cord3_change, cord4_change, mat_cord_change, color1_change, color2_change, color3_change, color4_change;
		void default_num();
		public:
		object_change_quad();
		object_change_quad(object_quad *in_object_quad);
		object_quad *body_object_quad;
		void set_cord1(vec3 in_cord1);
		void set_cord2(vec3 in_cord2);
		void set_cord3(vec3 in_cord3);
		void set_cord4(vec3 in_cord4);
		void set_cord_a_b(vec3 in_cord1, vec3 in_cord3);
		void set_cord_h_v(float h, float v);
		void set_mat_cord(vec3 in_mat_cord);
		void set_direction(quat in_direction);
		void set_color1(color4 in_color1);
		void set_color2(color4 in_color2);
		void set_color3(color4 in_color3);
		void set_color4(color4 in_color4);
		void set_upper_object(object *in_object);
		
		virtual void apply();
		};


	}
#endif
