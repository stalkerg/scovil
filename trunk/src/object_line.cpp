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
	
	glBegin (GL_LINES);
  	glVertex3f (cord.x, cord.y,cord.z);
  	glVertex3f (cord2.x,cord2.y ,cord2.z);
  	glEnd ();

	}

void object_line::draw_all()
	{
	std::list<object_container>::iterator object_iterator;
	glPushMatrix();
		glTranslatef(mat_cord.x, mat_cord.y,mat_cord.z);
		glTranslatef(mat_cord2.x, mat_cord2.y,mat_cord2.z);
		draw_body();

		for(object_iterator=lower_objects.begin();
		    object_iterator==lower_objects.end();
		    ++object_iterator)
			object_iterator->p_object->draw();
	glPopMatrix();
	}

