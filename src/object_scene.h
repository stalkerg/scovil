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
		bool resolution_change, near_change, far_change, aspect_change;
		public:
		
		}
	}

#endif
