// Scene class cppfile
#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include "object_scene.h"
#include "init.h"

object_scene::object_scene()
	{
	resolution.x=get_options()->win_w;
	resolution.y=get_options()->win_h;
	}

void object_scene::draw()
	{
	#ifdef DEBUG
	std::cout<<"object_scene draw()"<<lower_objects.size()<<std::endl;
	#endif
	glClearColor(0,0,0,0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective (aspect, resolution.x / resolution.y, near, far);
	glMatrixMode(GL_MODELVIEW);
	std::list<object_container>::iterator object_iterator;
	if (lower_objects.size())
		{
		glPushMatrix();
			for(object_iterator=lower_objects.begin();
			    object_iterator!=lower_objects.end();
			    ++object_iterator)
				object_iterator->p_object->draw();
		glPopMatrix();
		}
	}

