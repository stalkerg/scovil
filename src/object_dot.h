#ifndef OBJECT_DOT
#define OBJECT_DOT

#include "object.h"
#include "mathlib.h"
#include <list>

class object_dot: public object
	{
	public:
	vec3 cord, mat_cord;
	GLint size;
	object_dot(float x, float y, float z, GLint in_size=1);
	object_dot(vec3 point, GLint in_size=1);
	object_dot();
	virtual void draw();
	void draw_body();
	void draw_all();
	};

#endif
