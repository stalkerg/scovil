#include <iostream>
#include <GL/gl.h>
#include "object_line.h"

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
	
void object_line::draw_body()
	{
	glLineWidth(width);
	glBegin(GL_LINES);
		glColor4f(start_color.r, start_color.g, start_color.b, start_color.a);
		glVertex3f(start.x, start.y, start.z);
		glColor4f(end_color.r, end_color.g, end_color.b, end_color.a);
		glVertex3f(end.x, end.y, end.z);
	glEnd ();
	}

void object_line::draw_all()
	{
	std::list<object_container>::iterator object_iterator;
	glPushMatrix();
		glTranslatef(mat_cord.x, mat_cord.y, mat_cord.z);
		draw_body();

		for(object_iterator=lower_objects.begin();
		    object_iterator!=lower_objects.end();
		    ++object_iterator)
			object_iterator->p_object->draw();
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



