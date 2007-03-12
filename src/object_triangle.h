#ifndef OBJECT_TRIANGLE
#define OBJECT_TRIANGLE

#include "object.h"
#include "mathlib.h"
#include <list>


class object_triangle: public object
	{
	void default_num();
	public:
	vec3 cord1, cord2, cord3, mat_cord;
	color4 color1, color2, color3;
	object_triangle(vec3 in_cord1, vec3 in_cord2, vec3 in_cord3);
	object_triangle();
	virtual void draw();
	void draw_body();
	void draw_all();
	};

#endif
