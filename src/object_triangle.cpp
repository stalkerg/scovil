#include <iostream>
#include <GL/gl.h>
#include "object_triangle.h"

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
	
void object_triangle::draw_body()
	{
	glPushMatrix();
		glTranslatef(mat_cord.x, mat_cord.y, mat_cord.z);
		glBegin(GL_TRIANGLES);
			glColor4f(color1.r, color1.g, color1.b, color1.a);
			glVertex3f(cord1.x, cord1.y, cord1.z);
			glColor4f(color2.r, color2.g, color2.b, color2.a);
			glVertex3f(cord2.x, cord2.y, cord2.z);
			glColor4f(color3.r, color3.g, color3.b, color3.a);
			glVertex3f(cord3.x, cord3.y, cord3.z);
		glEnd ();
	glPopMatrix();
	}

void object_triangle::draw_all()
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



