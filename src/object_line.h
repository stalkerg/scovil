#ifndef OBJECT_LINE
#define OBJECT_LINE

#include "object.h"
#include "mathlib.h"
#include <list>


class object_line: public object
	{
	public:
	vec3 cord, mat_cord;
	vec3 cord2, mat_cord2;
	virtual void draw();
	void draw_body();
	void draw_all();
	};

#endif
