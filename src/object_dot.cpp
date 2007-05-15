// Object class cppfile
#include <iostream>
#include "object_dot.h"

namespace scovil
	{
	void object_dot::draw()
		{
		#ifdef DEBUG
		std::cout<<"object_dot draw()"<<std::endl;
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

	void object_dot::draw_body()
		{
		glColor4f(color.r, color.g, color.b, color.a);
		glPointSize(size); //realy slow on some card
		glBegin(GL_POINTS);
			glVertex3f(cord.x, cord.y, cord.z);
		glEnd();
		}

	void object_dot::draw_all()
		{
		glPushMatrix();
			glTranslatef(mat_cord.x, mat_cord.y, mat_cord.z);
			glMultMatrixf(rot_mat);
			draw_body();

			for(object_iterator=lower_objects.begin();
			    object_iterator!=lower_objects.end();
			    ++object_iterator)
			object_iterator->p_object->draw();
		glPopMatrix();
	}

	object_dot::object_dot(vec3 point)
		{
		default_num();
		cord = point;
		}

	object_dot::object_dot()
		{
		default_num();
		}

	void object_dot::default_num()
		{
		size = 1;
		color = color4(1.0, 1.0, 1.0, 1.0);
		upper_object = NULL;
		}

	object_change_dot::object_change_dot()
		{
		default_num();
		body_object_dot = new object_dot;;
		}

	object_change_dot::object_change_dot(object_dot *in_object_dot)
		{
		default_num();
		body_object_dot = in_object_dot;
		}

	void object_change_dot::default_num()
		{
		cord_change = false;
		mat_cord_change = false;
		direction_change = false;
		color_change = false;
		size_change = false;
		upper_object_change = false;
		delete_lower = false;
		}

	void object_change_dot::apply()
		{
		if (cord_change)
			body_object_dot->cord = cord;
		if (mat_cord_change)
			body_object_dot->mat_cord = mat_cord;
		if (direction_change)
			{
			body_object_dot->direction = direction;
			body_object_dot->rot_mat = mat4(mat3(direction));
			}
		if (color_change)
			body_object_dot->color = color;
		if (size_change)
			body_object_dot->size = size;
		if (upper_object_change)
			{
			if (body_object_dot->upper_object)
				upper_object->del_object(body_object_dot);
			body_object_dot->upper_object = upper_object;
			upper_object->add_object(body_object_dot);
			}
		if (delete_lower)
			body_object_dot->del_object(delete_lower_object);
		}

	void object_change_dot::set_cord(vec3 in_cord)
		{
		cord_change = true;
		cord = in_cord;
		}

	void object_change_dot::set_mat_cord (vec3 in_mat_cord)
		{
		mat_cord_change = true;
		mat_cord = in_mat_cord;
		}

	void object_change_dot::set_direction(quat in_direction)
		{
		direction_change = true;
		direction = in_direction;
		}

	void object_change_dot::set_size(GLint in_size)
		{
		size_change = true;
		size = in_size;
		}

	void object_change_dot::set_color(color4 in_color)
		{
		color_change = true;
		color = in_color;
		}

	void object_change_dot::set_upper_object(object *in_object)
		{
		upper_object_change = true;
		upper_object = in_object;
		}

	void object_change_dot::set_delete_lower_object(object *in_object)
		{
		delete_lower = true;
		delete_lower_object = in_object;
		}
	}



