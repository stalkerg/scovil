#include "change_line.h"
#include "../object.h"
#include "../object_line.h"
#include "../main_cycle.h"

//#define DEBUG

#ifdef DEBUG
#include <iostream>
#endif

static scovil::object_change_line *top_change=NULL;

void *create_change_line(void *in_object)
	{
	if (top_change)
		commit_change_line();
	if (in_object)
		{
		top_change = new scovil::object_change_line((scovil::object_line*)in_object);
		return NULL;
		}
	else
		{
		top_change = new scovil::object_change_line();
		return top_change->body_object_line;
		}
	}


void set_start_change_line(float x, float y, float z)
	{
	if (top_change)
		top_change->set_start(vec3(x, y, z));

	}

void set_end_change_line(float x, float y,float z)
	{
	if (top_change)
		top_change->set_end(vec3(x, y, z));

	}

void set_mat_cord_change_line(float x, float y, float z)
	{
	if (top_change)
		top_change->set_mat_cord(vec3(x, y, z));

	}

void set_direction_change_line(float x, float y, float z, float angle)
	{
	if (top_change)
		top_change->set_direction(quat(vec3(x, y, z), angle));
	}

void set_width_change_line(int in_width)
	{
	if (top_change)
		top_change->set_width(in_width);

	}

void set_start_color_change_line(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_start_color(color4(r, g, b, a));

	}

void set_end_color_change_line(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_end_color(color4(r, g, b, a));

	}

void set_upper_object_change_line(void *in_object)
	{
	#ifdef DEBUG
	std::cout<<"set_upper_object_change_line "<<in_object<<std::endl;
	#endif
	if (top_change)
		top_change->set_upper_object((scovil::object *)in_object);
	}

void commit_change_line()
	{
	scovil::add_change(top_change);
	top_change = NULL;
	}
