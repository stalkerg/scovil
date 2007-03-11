#ifndef OBJECT_LINE
#define OBJECT_LINE

#include "object.h"
#include "mathlib.h"
#include <list>


class object_line: public object
	{
	public:
	vec3 start, end;
	object_line(float x1,float y1, float z1, float x2, float y2, float z2);
	object_line(vec3 in_start, vec3 in_end);
	virtual void draw();
	void draw_body();
	void draw_all();
	};

#endif
