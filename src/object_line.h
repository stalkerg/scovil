#ifndef OBJECT_LINE
#define OBJECT_LINE

#include "object.h"
#include "mathlib.h"
#include <list>


class object_line: public object
	{
	void default_num();
	public:
	vec3 start, end,  mat_cord;
	color4 start_color, end_color;
	GLint width;
	object_line(vec3 in_start, vec3 in_end);
	object_line();
	virtual void draw();
	void draw_body();
	void draw_all();
	};

#endif
