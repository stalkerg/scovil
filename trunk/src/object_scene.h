// Scene class headerfile
#ifndef OBJECT_SCENE
#define OBJECT_SCENE

#include <GL/gl.h>
#include "object.h"
#include "mathlib.h"

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
	}

#endif
