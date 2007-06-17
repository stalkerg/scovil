#include <iostream>
#include <GL/gl.h>
#include "object_triangle.h"

//#define DEBUG

namespace scovil
	{
	void object_triangle::draw()
		{
		#ifdef DEBUG
		std::cout<<"object_triangle draw()"<<std::endl;
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

	void object_triangle::draw_body(bool notall)
		{
		glDisable(GL_TEXTURE_2D);
		glPushMatrix();
			glTranslatef(mat_cord.x, mat_cord.y, mat_cord.z);
			glMultMatrixf(rot_mat);
			glBegin(GL_TRIANGLES);
				glColor4f(color1.r, color1.g, color1.b, color1.a);
				glVertex3f(cord1.x, cord1.y, cord1.z);
				glColor4f(color2.r, color2.g, color2.b, color2.a);
				glVertex3f(cord2.x, cord2.y, cord2.z);
				glColor4f(color3.r, color3.g, color3.b, color3.a);
				glVertex3f(cord3.x, cord3.y, cord3.z);
			glEnd ();
		if (notall)
			glPopMatrix();
		}

	void object_triangle::draw_all()
		{
		std::list<object_container>::iterator object_iterator;
		draw_body(false);

		for(object_iterator=lower_objects.begin();
		    object_iterator!=lower_objects.end();
		    ++object_iterator)
			object_iterator->p_object->draw();
		glPopMatrix();
		}

	object_triangle::object_triangle(vec3 in_cord1, vec3 in_cord2, vec3 in_cord3)
		{
		default_num();
		cord1 = in_cord1;
		cord2 = in_cord2;
		cord3 = in_cord3;
		}

	object_triangle::object_triangle()
		{
		default_num();
		}

	void object_triangle::default_num()
		{
		color1 = color4(1.0, 1.0, 1.0, 1.0);
		color2 = color4(1.0, 1.0, 1.0, 1.0);
		color3 = color4(1.0, 1.0, 1.0, 1.0);
		}
	

	object_change_triangle::object_change_triangle()
		{
		default_num();
		body_object_triangle = new object_triangle;;
		}

	object_change_triangle::object_change_triangle(object_triangle *in_object_triangle)
		{
		default_num();
		body_object_triangle = in_object_triangle;
		}

	void object_change_triangle::default_num()
		{
		cord1_change = false;
		cord2_change = false;
		cord3_change = false;
		mat_cord_change = false;
		direction_change = false;
		color1_change = false;
		color2_change = false;
		color3_change = false;
		upper_object_change = false;
		}

	void object_change_triangle::apply()
		{
		if (cord1_change)
			body_object_triangle->cord1 = cord1;
		if (cord2_change)
			body_object_triangle->cord2 = cord2;
		if (cord3_change)
			body_object_triangle->cord3 = cord3;
		if (mat_cord_change)
			body_object_triangle->mat_cord = mat_cord;
		if (direction_change)
			{
			body_object_triangle->direction = direction;
			body_object_triangle->rot_mat = mat4(mat3(direction));
			}
		if (color1_change)
			body_object_triangle->color1 = color1;
		if (color2_change)
			body_object_triangle->color2 = color2;
		if (color3_change)
			body_object_triangle->color3 = color3;
		if (upper_object_change)
			{
			#ifdef DEBUG
			std::cout<<"object_change_triangle apply() upper_object_change "<<this<<" "<<upper_object<<std::endl;
			#endif
			if (body_object_triangle->upper_object)
				upper_object->del_object(body_object_triangle);
			body_object_triangle->upper_object = upper_object;
			upper_object->add_object(body_object_triangle);
			}
		}

	void object_change_triangle::set_cord1(vec3 in_cord1)
		{
		cord1_change = true;
		cord1=in_cord1;
		}
	
	void object_change_triangle::set_cord2(vec3 in_cord2)
		{
		cord2_change = true;
		cord2=in_cord2;
		}
	
	void object_change_triangle::set_cord3(vec3 in_cord3)
		{
		cord3_change = true;
		cord3=in_cord3;
		}
	
	void object_change_triangle::set_mat_cord(vec3 in_mat_cord)
		{
		mat_cord_change = true;
		mat_cord=in_mat_cord;
		}

	void object_change_triangle::set_direction(quat in_direction)
		{
		direction_change = true;
		direction = in_direction;
		}

	void object_change_triangle::set_color1(color4 in_color1)
		{
		color1_change = true;
		color1=in_color1;
		}

	void object_change_triangle::set_color2(color4 in_color2)
		{
		color2_change = true;
		color2=in_color2;
		}
	
	void object_change_triangle::set_color3(color4 in_color3)
		{
		color3_change = true;
		color3=in_color3;
		}

	void object_change_triangle::set_upper_object(object*in_object)
		{
		upper_object_change = true;
		upper_object = in_object;
		}
	}




