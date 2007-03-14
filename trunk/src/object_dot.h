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

#define DOT_CHANGE 1

class  object_change_dot:public object_change
	{
	public:
	object_change_dot();
	object_dot *body_object_dot;
	vec3 cord, mat_cord;
	color4 color;
	GLint size;
	bool cord_change, mat_cord_change, color_change, size_change;
	void apple(object_dot *in_dot);
	};

#endif

