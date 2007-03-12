#ifndef OBJECT_DOT
#define OBJECT_DOT

#include "object.h"
#include "mathlib.h"
#include <list>

class object_dot: public object
	{
	void default_num();
	public:
	vec3 cord, mat_cord;
	color4 color;
	GLint size;
	object_dot(vec3 point);
	object_dot();
	virtual void draw();
	void draw_body();
	void draw_all();
	};

#endif
