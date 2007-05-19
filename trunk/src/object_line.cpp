#include <iostream>
#include <GL/gl.h>
#include "object_line.h"

//#define DEBUG

namespace scovil
	{
	void object_line::draw()
		{
		#ifdef DEBUG
		std::cout<<"object_line draw()"<<std::endl;
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

	void object_line::draw_body(bool notall)
		{
		#ifdef DEBUG
		std::cout<<"object_line draw_body()"<<std::endl;
		#endif
		glLineWidth(width);
		glPushMatrix();
			glTranslatef(mat_cord.x, mat_cord.y, mat_cord.z);
			glMultMatrixf(rot_mat);
			glBegin(GL_LINES);
				glColor4f(start_color.r, start_color.g, start_color.b, start_color.a);
				glVertex3f(start.x, start.y, start.z);
				glColor4f(end_color.r, end_color.g, end_color.b, end_color.a);
				glVertex3f(end.x, end.y, end.z);
			glEnd ();
		if (notall)
			glPopMatrix();
		}

	void object_line::draw_all()
		{
		#ifdef DEBUG
		std::cout<<"object_line draw_all() "<<this<<std::endl;
		#endif
		std::list<object_container>::iterator object_iterator;
		draw_body(false);

		for(object_iterator=lower_objects.begin();
		    object_iterator!=lower_objects.end();
		    ++object_iterator)
			{
			#ifdef DEBUG
			std::cout<<"object_line draw lower object"<<std::endl;
			#endif
			object_iterator->p_object->draw();
			}
		glPopMatrix();
		}

	object_line::object_line(vec3 in_start, vec3 in_end)
		{
		default_num();
		start = in_start;
		end = in_end;
		}

	object_line::object_line()
		{
		default_num();
		}

	void object_line::default_num()
		{
		width = 1;
		start_color = color4(1.0, 1.0, 1.0, 1.0);
		end_color = color4(1.0, 1.0, 1.0, 1.0);
		}
	
	object_change_line::object_change_line()
		{
		default_num();
		body_object_line = new object_line;;//?
		}
	object_change_line::object_change_line(object_line *in_object_line)
		{
		default_num();
		body_object_line = in_object_line;
		}

	void object_change_line::default_num()
		{
		start_change = false;
		end_change = false;
		mat_cord_change = false;
		direction_change = false;
		start_color_change = false;
		end_color_change = false;
		width_change = false;
		upper_object_change = false;
		}
	
	void object_change_line::apply()//?
		{
		if (start_change)
			body_object_line->start = start;
		if (end_change)
			body_object_line->end = end;
		if (mat_cord_change)
			body_object_line->mat_cord = mat_cord;
		if (direction_change)
			{
			body_object_line->direction = direction;
			body_object_line->rot_mat = mat4(mat3(direction));
			}
		if (start_color_change)
			body_object_line->start_color = start_color;
		if (end_color_change)
			body_object_line->end_color = end_color;
		if (width_change)
			body_object_line->width = width;
		if (upper_object_change)
			{
			#ifdef DEBUG
			std::cout<<"object_change_line apply() upper_object_change "<<this<<" "<<upper_object<<std::endl;
			#endif
			if (body_object_line->upper_object) //Если есть верхний обьект.
				upper_object->del_object(body_object_line); //То из него выписываем текущий.
			body_object_line->upper_object = upper_object; //Переписываем указатель на верхнйи обьект.
			upper_object->add_object(body_object_line); //Вписываем себя в верхний обьект.
			}
		}

	void object_change_line::set_start(vec3 in_start)
		{
		start_change = true;
		start=in_start;
		}

	void object_change_line::set_end(vec3 in_end)
		{
		end_change = true;
		end=in_end;
		}
	
	void object_change_line::set_mat_cord(vec3 in_mat_cord)
		{
		mat_cord_change = true;
		mat_cord=in_mat_cord;
		}

	void object_change_line::set_direction(quat in_direction)
		{
		direction_change = true;
		direction = in_direction;
		}

	void object_change_line::set_start_color(color4 in_start_color)
		{
		start_color_change = true;
		start_color=in_start_color;
		}
	
	void object_change_line::set_end_color(color4 in_end_color)
		{
		end_color_change = true;
		end_color=in_end_color;
		}
	
	void object_change_line::set_width(GLint in_width)
		{
		width_change = true;
		width=in_width;
		}
	
	void object_change_line::set_upper_object(object*in_object)
		{
		upper_object_change = true;
		upper_object = in_object;
		}

	}



