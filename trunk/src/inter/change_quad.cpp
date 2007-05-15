#include "change_quad.h"
#include "../object.h"
#include "../object_quad.h"
#include "../main_cycle.h"

static scovil::object_change_quad *top_change=NULL;

void *create_change_quad(void *in_object)
	{
	if (top_change)
		commit_change_quad();
	if (in_object)
		{
		top_change = new scovil::object_change_quad((scovil::object_quad*)in_object);
		return NULL;
		}
	else
		{
		top_change = new scovil::object_change_quad();
		return top_change->body_object_quad;
		}
	}

void set_cord1_change_quad(float x1, float y1, float z1)
	{
	if (top_change)
		top_change->set_cord1(vec3(x1, y1, z1));
	}

void set_cord2_change_quad(float x2, float y2, float z2)
	{
	if (top_change)
		top_change->set_cord2(vec3(x2, y2, z2));
	}

void set_cord3_change_quad(float x3, float y3, float z3)
	{
	if (top_change)
		top_change->set_cord3(vec3(x3, y3, z3));
	}

void set_cord4_change_quad(float x4, float y4, float z4)
	{
	if (top_change)
		top_change->set_cord4(vec3(x4, y4, z4));
	}

void set_cord_a_b_change_quad(float x1, float y1, float z1,float x3, float y3, float z3)
	{
	if (top_change)
		top_change->set_cord_a_b(vec3(x1, y1, z1),vec3(x3, y3, z3));
	
	}

void set_cord_h_v_change_quad(float x1,float y1,float z1, float h, float v)
	{
	if (top_change)
		top_change->set_cord_h_v(vec3(x1, y1, z1), h, v);

	}

void set_mat_cord_change_quad(float x, float y, float z)
	{
	if (top_change)
		top_change->set_mat_cord(vec3(x, y, z));
	}

void set_direction_change_quad(float x, float y, float z, float angle)
	{
	if (top_change)
		top_change->set_direction(quat(vec3(x, y, z), angle));
	}

void set_color1_change_quad(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color1(color4(r, g, b, a));

	}

void set_color2_change_quad(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color2(color4(r, g, b, a));

	}

void set_color3_change_quad(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color3(color4(r, g, b, a));

	}

void set_color4_change_quad(float r, float g, float b, float a)
	{
	if (top_change)
		top_change->set_color4(color4(r, g, b, a));

	}

void set_upper_object_change_quad(void *in_object)
	{
	if (top_change)
		top_change->set_upper_object((scovil::object *)in_object);
	}

void commit_change_quad()
	{
	scovil::add_change(top_change);
	top_change = NULL;
	}

