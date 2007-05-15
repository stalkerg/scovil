#include <iostream>
#include <GL/gl.h>
#include "object_quads.h"

//#define DEBUG

namespace scovil
	{
	void object_quads::draw()
		{
		#ifdef DEBUG
		std::cout<<"object_quads draw()"<<std::endl;
		print_math(cord1); std::cout<<" ";
		print_math(cord2); std::cout<<" ";
		print_math(cord3); std::cout<<" ";
		print_math(cord4); std::cout<<std::endl;
		#endif
		if(lower_objects.size())
			{
			draw_all();
			}
		else
			{
			draw_body();
			}
		}

	void object_quads::draw_body(bool notall)
		{
		glPushMatrix();
			glTranslatef(mat_cord.x, mat_cord.y, mat_cord.z);
			glMultMatrixf(rot_mat);
			glBegin(GL_QUADS);
				glColor4f(color_cord1.r, color_cord1.g, color_cord1.b, color_cord1.a);
				glVertex3f(cord1.x, cord1.y, cord1.z);
				glColor4f(color_cord2.r, color_cord2.g, color_cord2.b, color_cord2.a);
				glVertex3f(cord2.x, cord2.y, cord2.z);
				glColor4f(color_cord3.r, color_cord3.g, color_cord3.b, color_cord3.a);
				glVertex3f(cord3.x, cord3.y, cord3.z);
				glColor4f(color_cord4.r, color_cord4.g, color_cord4.b, color_cord4.a);
				glVertex3f(cord4.x, cord4.y, cord4.z);
			glEnd ();
		if (notall)
			glPopMatrix();
		}

	void object_quads::draw_all()
		{
		std::list<object_container>::iterator object_iterator;
		draw_body(false);

		for(object_iterator=lower_objects.begin();
		    object_iterator!=lower_objects.end();
		    ++object_iterator)
			object_iterator->p_object->draw();
		glPopMatrix();
		}

	object_quads::object_quads(vec3 in_cord1, vec3 in_cord2, vec3 in_cord3, vec3 in_cord4)
		{
		default_num();
		cord1 = in_cord1;
		cord2 = in_cord2;
		cord3 = in_cord3;
		cord4 = in_cord4;
		}

	object_quads::object_quads()
		{
		default_num();
		}

	void object_quads::default_num()
		{
		color_cord1 = color4(1.0, 1.0, 1.0, 1.0);
		color_cord2 = color4(1.0, 1.0, 1.0, 1.0);
		color_cord3 = color4(1.0, 1.0, 1.0, 1.0);
		color_cord4 = color4(1.0, 1.0, 1.0, 1.0);
		}
	

	object_change_quads::object_change_quads()
		{
		default_num();
		body_object_quads = new object_quads;;
		}

	object_change_quads::object_change_quads(object_quads *in_object_quads)
		{
		default_num();
		body_object_quads = in_object_quads;
		}

	void object_change_quads::default_num()
		{
		cord1_change = false;
		cord2_change = false;
		cord3_change = false;
		cord4_change = false;
		mat_cord_change = false;
		direction_change = false;
		color_cord1_change = false;
		color_cord2_change = false;
		color_cord3_change = false;
		color_cord4_change = false;
		upper_object_change = false;
		}

	void object_change_quads::apply()
		{
		if (cord1_change)
			body_object_quads->cord1 = cord1;
		if (cord2_change)
			body_object_quads->cord2 = cord2;
		if (cord3_change)
			body_object_quads->cord3 = cord3;
		if (cord4_change)
			body_object_quads->cord4 = cord4;
		if (mat_cord_change)
			body_object_quads->mat_cord = mat_cord;
		if (direction_change)
			{
			body_object_quads->direction = direction;
			body_object_quads->rot_mat = mat4(mat3(direction));
			}
		if (color_cord1_change)
			body_object_quads->color_cord1 = color_cord1;
		if (color_cord2_change)
			body_object_quads->color_cord2 = color_cord2;
		if (color_cord3_change)
			body_object_quads->color_cord3 = color_cord3;
		if (color_cord4_change)
			body_object_quads->color_cord4 = color_cord4;
		if (upper_object_change)
			{
			if (body_object_quads->upper_object)
				upper_object->del_object(body_object_quads);
			body_object_quads->upper_object = upper_object;
			upper_object->add_object(body_object_quads);
			}
		}

	void object_change_quads::set_cord1(vec3 in_cord1)
		{
		cord1_change = true;
		cord1=in_cord1;
		}
	
	void object_change_quads::set_cord2(vec3 in_cord2)
		{
		cord2_change = true;
		cord2=in_cord2;
		}
	
	void object_change_quads::set_cord3(vec3 in_cord3)
		{
		cord3_change = true;
		cord3=in_cord3;
		}
	void object_change_quads::set_cord4(vec3 in_cord4)
		{
		cord4_change = true;
		cord4=in_cord4;
		}

	void object_change_quads::set_mat_cord(vec3 in_mat_cord)
		{
		mat_cord_change = true;
		mat_cord=in_mat_cord;
		}

	void object_change_quads::set_direction(quat in_direction)
		{
		direction_change = true;
		direction = in_direction;
		}

	void object_change_quads::set_color_cord1(color4 in_color_cord1)
		{
		color_cord1_change = true;
		color_cord1=in_color_cord1;
		}

	void object_change_quads::set_color_cord2(color4 in_color_cord2)
		{
		color_cord2_change = true;
		color_cord2=in_color_cord2;
		}
	
	void object_change_quads::set_color_cord3(color4 in_color_cord3)
		{
		color_cord3_change = true;
		color_cord3=in_color_cord3;
		}
	void object_change_quads::set_color_cord4(color4 in_color_cord4)
		{
		color_cord4_change = true;
		color_cord4=in_color_cord4;
		}

	void object_change_quads::set_upper_object(object*in_object)
		{
		upper_object_change = true;
		upper_object = in_object;
		}
	}




