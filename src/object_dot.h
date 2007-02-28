#ifndef OBJECT_DOT
#define OBJECT_DOT

#include "object.h"
#include "mathlib.h"
#include <list>

class object_dot: public object
	{
	public:
	vec3 cord, mat_cord;
	virtual void draw();
	void draw_body();
	void draw_all();
	};

#endif
