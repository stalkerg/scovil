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
	glBegin(GL_LINES);
	glVertex3f(start.x, start.y, start.z);
	glVertex3f(end.x, end.y, end.z);
	glEnd ();
	}

void object_line::draw_all()
	{
	std::list<object_container>::iterator object_iterator;
	glPushMatrix();
		draw_body();

		for(object_iterator=lower_objects.begin();
		    object_iterator!=lower_objects.end();
		    ++object_iterator)
			object_iterator->p_object->draw();
	glPopMatrix();
	}

object_line::object_line(float x1,float y1, float z1, float x2, float y2, float z2)
	{
	start.x = x1;
	start.y = y1;
	start.z = z1;
	end.x = x2;
	end.y = y2;
	end.z = z2;
	}

object_line::object_line(vec3 in_start, vec3 in_end)
	{
	start = in_start;
	end = in_end;
	}




