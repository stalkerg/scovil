#include "change_triangle.h"
#include "../object.h"
#include "../object_triangle.h"
#include "../main_cycle.h"

static scovil::object_change_triangle *top_change=NULL;

void *create_change_triangle(void *in_object)
	{
	if (in_object)
		{
		top_change = new scovil::object_change_triangle((scovil::object_triangle*)in_object);
		return NULL;
		}
	else
		{
		top_change = new scovil::object_change_triangle();
		return top_change->body_object_triangle;
		}
	}

void set_cord1_change(float x1, float y1, float z1)
	{
	if (top_change)
		top_change->set_cord1(vec3(x1, y1, z1));
	}

void set_cord2_change(float x2, float y2, float z2)
	{
	if (top_change)
		top_change->set_cord2(vec3(x2, y2, z2));
	}

void set_cord3_change(float x3, float y3, float z3)
	{
	if (top_change)
		top_change->set_cord1(vec3(x3, y3, z3));
	}

void set_mat_cord_change(float x, float y, float z)
	{
	if (top_change)
		top_change->set_mat_cord(vec3(x, y, z));
	}

void set_color1_change(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color1(color4(r, g, b, a));

	}

void set_color2_change(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color2(color4(r, g, b, a));

	}

void set_color3_change(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color3(color4(r, g, b, a));

	}

void set_upper_object_change_triangle(void *in_object)
	{
	if (top_change)
		top_change->set_upper_object((scovil::object *)in_object);
	}

void commit_change_triangle()
	{
	scovil::add_change(top_change);
	top_change = NULL;
	}

