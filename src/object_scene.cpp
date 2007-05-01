// Scene class cppfile
#include <iostream>
#include <GL/gl.h>
#include <GL/glu.h>
#include "object_scene.h"


namespace scovil
	{
	object_scene::object_scene()
		{
		resolution.x=get_options()->win_w;
		resolution.y=get_options()->win_h;
		near = 0.01;
		far = 10000;
		aspect = 90;
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
	
	object_change_scene::object_change_scene(object_scene *in_object_scene)
		{
		default_num();
		body_object_scene = in_object_scene;
		}
	
	void object_change_scene::default_num()
		{
		resolution_change = false;
		near_change = false;
		far_change = false;
		aspect_change = false;
		delete_lower = false;
		}

	void object_change_scene::set_resolution(vec2 in_resolution)
		{
		resolution_change = true;
		resolution = in_resolution;
		}

	void object_change_scene::set_near(GLdouble in_near)
		{
		near_change = true;
		near = in_near;
		}

	void object_change_scene::set_far(GLdouble in_far)
		{
		far_change = true;
		far = in_far;
		}

	void object_change_scene::set_aspect(GLdouble in_aspect)
		{
		aspect_change = true;
		aspect = in_aspect;
		}

	void object_change_scene::set_delete_lower_object(object *in_object)
		{
		delete_lower = true;
		delete_lower_object = in_object;
		}

	void object_change_scene::apply()
		{
		if (resolution_change)
			body_object_scene->resolution = resolution;
		if (near_change)
			body_object_scene->near = near;
		if (far_change)
			body_object_scene->far = far;
		if (aspect_change)
			body_object_scene->aspect = aspect;
		if (delete_lower)
			body_object_scene->del_object(delete_lower_object);
		}
	}
