#include <iostream>
#include <GL/gl.h>
#include "object_quad.h"

//#define DEBUG

namespace scovil
	{
	void object_quad::draw()
		{
		#ifdef DEBUG
		std::cout<<"object_quad draw()"<<std::endl;
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

	void object_quad::draw_body(bool notall)
		{
		glPushMatrix();
			glTranslatef(mat_cord.x, mat_cord.y, mat_cord.z);
			glMultMatrixf(rot_mat);
			if (quad_texture)
				quad_texture->bind();
			else
				glDisable(GL_TEXTURE_2D);
			glBegin(GL_QUADS);
				glTexCoord2f(0, 1);
				glColor4f(color_cord1.r, color_cord1.g, color_cord1.b, color_cord1.a);
				glVertex3f(cord1.x, cord1.y, cord1.z);
				glTexCoord2f(1, 1);
				glColor4f(color_cord2.r, color_cord2.g, color_cord2.b, color_cord2.a);
				glVertex3f(cord2.x, cord2.y, cord2.z);
				glTexCoord2f(1, 0);
				glColor4f(color_cord3.r, color_cord3.g, color_cord3.b, color_cord3.a);
				glVertex3f(cord3.x, cord3.y, cord3.z);
				glTexCoord2f(0, 0);
				glColor4f(color_cord4.r, color_cord4.g, color_cord4.b, color_cord4.a);
				glVertex3f(cord4.x, cord4.y, cord4.z);
			glEnd ();
		if (notall)
			glPopMatrix();
		}

	void object_quad::draw_all()
		{
		std::list<object_container>::iterator object_iterator;
		draw_body(false);

		for(object_iterator=lower_objects.begin();
		    object_iterator!=lower_objects.end();
		    ++object_iterator)
			object_iterator->p_object->draw();
		glPopMatrix();
		}

	object_quad::object_quad(vec3 in_cord1, vec3 in_cord2, vec3 in_cord3, vec3 in_cord4)
		{
		default_num();
		cord1 = in_cord1;
		cord2 = in_cord2;
		cord3 = in_cord3;
		cord4 = in_cord4;
		}
	
	object_quad::object_quad()
		{
		default_num();
		}

	void object_quad::default_num()
		{
		color_cord1 = color4(1.0, 1.0, 1.0, 1.0);
		color_cord2 = color4(1.0, 1.0, 1.0, 1.0);
		color_cord3 = color4(1.0, 1.0, 1.0, 1.0);
		color_cord4 = color4(1.0, 1.0, 1.0, 1.0);
		quad_texture = NULL;
		}
	

	object_change_quad::object_change_quad()
		{
		default_num();
		body_object_quad = new object_quad;;
		}

	object_change_quad::object_change_quad(object_quad *in_object_quad)
		{
		default_num();
		body_object_quad = in_object_quad;
		}

	void object_change_quad::default_num()
		{
		cord1_change = false;
		cord2_change = false;
		cord3_change = false;
		cord4_change = false;
		mat_cord_change = false;
		direction_change = false;
		color1_change = false;
		color2_change = false;
		color3_change = false;
		color4_change = false;
		upper_object_change = false;
		}

	void object_change_quad::apply()
		{
		if (cord1_change)
			body_object_quad->cord1 = cord1;
		if (cord2_change)
			body_object_quad->cord2 = cord2;
		if (cord3_change)
			body_object_quad->cord3 = cord3;
		if (cord4_change)
			body_object_quad->cord4 = cord4;
		if (mat_cord_change)
			body_object_quad->mat_cord = mat_cord;
		if (direction_change)
			{
			body_object_quad->direction = direction;
			body_object_quad->rot_mat = mat4(mat3(direction));
			}
		if (color1_change)
			body_object_quad->color_cord1 = color_cord1;
		if (color2_change)
			body_object_quad->color_cord2 = color_cord2;
		if (color3_change)
			body_object_quad->color_cord3 = color_cord3;
		if (color4_change)
			body_object_quad->color_cord4 = color_cord4;
		if (set_texture_change)
			body_object_quad->quad_texture = quad_texture;
		if (upper_object_change)
			{
			if (body_object_quad->upper_object)
				upper_object->del_object(body_object_quad);
			body_object_quad->upper_object = upper_object;
			upper_object->add_object(body_object_quad);
			}
		}

	void object_change_quad::set_cord1(vec3 in_cord1)
		{
		cord1_change = true;
		cord1 = in_cord1;
		}
	
	void object_change_quad::set_cord2(vec3 in_cord2)
		{
		cord2_change = true;
		cord2 = in_cord2;
		}
	
	void object_change_quad::set_cord3(vec3 in_cord3)
		{
		cord3_change = true;
		cord3 = in_cord3;
		}
	void object_change_quad::set_cord4(vec3 in_cord4)
		{
		cord4_change = true;
		cord4 = in_cord4;
		}
	void object_change_quad::set_cord_a_b(vec3 in_cord1,vec3 in_cord3)
		{
		cord1_change = true;
		cord1 = in_cord1;
		cord2_change = true;
		cord2 = vec3(in_cord1.x,in_cord3.y,in_cord1.z);
		cord3_change = true;
		cord3  =in_cord3;
		cord4_change = true;
		cord4 = vec3(in_cord3.x,in_cord1.y,in_cord1.z);
		}
	
	void object_change_quad::set_cord_h_v(float h=0.0, float v=0.0)
		{
		cord1_change = true;
		cord1 = vec3(0.0, 0.0, 0.0);
		cord2_change = true;
		cord2 = vec3(0.0, v, 0.0);
		cord3_change = true;
		cord3 = vec3(h, v, 0.0);
		cord4_change = true;
		cord4 = vec3(h, 0.0, 0.0);
		}

	void object_change_quad::set_mat_cord(vec3 in_mat_cord)
		{
		mat_cord_change = true;
		mat_cord = in_mat_cord;
		}

	void object_change_quad::set_direction(quat in_direction)
		{
		direction_change = true;
		direction = in_direction;
		}

	void object_change_quad::set_color1(color4 in_color1)
		{
		color1_change = true;
		color_cord1 = in_color1;
		}

	void object_change_quad::set_color2(color4 in_color2)
		{
		color2_change = true;
		color_cord2 = in_color2;
		}
	
	void object_change_quad::set_color3(color4 in_color3)
		{
		color3_change = true;
		color_cord3 = in_color3;
		}
	void object_change_quad::set_color4(color4 in_color4)
		{
		color4_change = true;
		color_cord4 = in_color4;
		}

	void object_change_quad::set_texture(texture *in_texture)
		{
		set_texture_change = true;
		quad_texture = in_texture;
		}

	void object_change_quad::set_upper_object(object *in_object)
		{
		upper_object_change = true;
		upper_object = in_object;
		}
	}




