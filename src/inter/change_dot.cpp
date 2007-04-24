#include "change_dot.h"
#include "../object.h"
#include "../object_dot.h"

static scovil::object_change_dot *top_change=NULL;

void *create_change_dot(void *in_object)
	{
	if (in_object)
		{
		top_change = new scovil::object_change_dot((scovil::object_dot*)in_object);
		return NULL;
		}
	else
		{
		top_change = new scovil::object_change_dot();
		return top_change->body_object_dot;
		}
	}

void set_cord_change_dot(float x, float y, float z)
	{
	if (top_change)
		top_change->set_cord(vec3(x, y, z));
	}

void set_mat_cord_change_dot(float x, float y, float z)
	{
	if (top_change)
		top_change->set_mat_cord (vec3(x, y, z));
	}

void set_color(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color(color4(r, g, b, a));
	}


