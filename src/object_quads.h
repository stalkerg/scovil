#ifndef OBJECT_QUADS
#define OBJECT_QUADS

#include "object.h"
#include "mathlib.h"
#include <list>

namespace scovil
	{
	class object_quads: public object
		{
		void default_num();
		public:
		vec3 cord1, cord2, cord3, cord4, mat_cord;
		color4 color_a, color_b, color_c, color_d;
		quat direction;
		mat4 rot_mat;
		object_quads(vec3 in_cord1, vec3 in_cord2, vec3 in_cord3, vec3 in_cord4);
		object_quads();
		virtual void draw();
		void draw_body(bool notall=true);
		void draw_all();
		};
	
	
	class  object_change_quads: public object_change
		{
		vec3 cord1, cord2, cord3, cord4, mat_cord;
		quat direction;
		color4 color_a, color_b, color_c, color_d;
		bool direction_change, cord1_change, cord2_change, cord3_change, cord4_change, mat_cord_change, color_a_change, color_b_change, color_c_change, color_d_change;
		void default_num();
		public:
		object_change_quads();
		object_change_quads(object_quads *in_object_quads);
		object_quads *body_object_quads;
		void set_cord1(vec3 in_cord1);
		void set_cord2(vec3 in_cord2);
		void set_cord3(vec3 in_cord3);
		void set_cord4(vec3 in_cord4);
		void set_mat_cord(vec3 in_mat_cord);
		void set_direction(quat in_direction);
		void set_color_a(color4 in_color_a);
		void set_color_b(color4 in_color_b);
		void set_color_c(color4 in_color_c);
		void set_color_d(color4 in_color_d);
		void set_upper_object(object *in_object);
		
		virtual void apply();
		};


	}
#endif
