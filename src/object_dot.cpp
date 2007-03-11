// Object class cppfile
#include <iostream>
#include <GL/gl.h>
#include "object_dot.h"

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
	//glColor3f(1.0,1.0,1.0);
	glPointSize(size);
	glBegin(GL_POINTS);
		glVertex3f(cord.x, cord.y, cord.z);
	glEnd();
	}

void object_dot::draw_all()
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

object_dot::object_dot(float x, float y, float z, GLint in_size)
	{
	cord.x = x;
	cord.y = y;
	cord.z = z;
	size = in_size;
	}

object_dot::object_dot(vec3 point, GLint in_size)
	{
	cord = point;
	size = in_size;
	}

object_dot::object_dot()
	{
	size = 1;
	}







