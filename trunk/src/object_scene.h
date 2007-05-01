// Scene class headerfile
#ifndef OBJECT_SCENE
#define OBJECT_SCENE

#include <GL/gl.h>
#include "object.h"
#include "mathlib.h"
#include "init.h"

namespace scovil
	{
	class object_scene : public object
		{
		public:
		vec2 resolution;
		GLdouble near, far, aspect;
		object_scene();
		virtual void draw();
		};

	class  object_change_scene:public object_change
		{
		vec2 resolution;
		GLdouble near, far, aspect;
		bool resolution_change, near_change, far_change, aspect_change, delete_lower;
		void default_num();
		public:
		object_change_scene(object_scene *in_object_scene);
		object_scene *body_object_scene;
		void set_resolution(vec2 in_resolution);
		void set_near(GLdouble in_near);
		void set_far(GLdouble in_far);
		void set_aspect(GLdouble in_aspect);
		void set_delete_lower_object(object *in_object);

		virtual void apply();
		};
	}

#endif
