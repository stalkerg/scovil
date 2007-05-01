#include "change_dot.h"
#include "../object.h"
#include "../object_dot.h"
#include "../main_cycle.h"

static scovil::object_change_dot *top_change = NULL;

void *create_change_dot(void *in_object)
	{
	if (top_change)
		commit_change_dot();
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

void set_delete_lower_object_change_dot(void *in_object)
	{
	if (top_change && in_object)
		top_change->set_delete_lower_object((scovil::object_dot*)in_object);
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

void set_color_change_dot(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color(color4(r, g, b, a));
	}

void set_size_change_dot(int size)
	{
	if (top_change)
		top_change->set_size(size);
	}

void set_upper_object_change_dot(void *in_object)
	{
	if (top_change)
		top_change->set_upper_object((scovil::object *)in_object);
	}

void commit_change_dot()
	{
	scovil::add_change(top_change);
	top_change = NULL;
	}

