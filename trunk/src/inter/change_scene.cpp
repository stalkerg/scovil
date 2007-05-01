#include "change_scene.h"
#include "../object.h"
#include "../object_scene.h"
#include "../main_cycle.h"

static scovil::object_change_scene *top_change=NULL;

void *create_scene()
	{
	scovil::object *first_object = new scovil::object_scene;
	scovil::set_head_object(first_object);
	return first_object;
	}

void set_delete_lower_object_change_scene(void *in_object)
	{
	if (top_change && in_object)
		top_change->set_delete_lower_object((scovil::object_scene*)in_object);
	}

void create_change_scene(void *in_object)
	{
	if (in_object)
		{
		top_change = new scovil::object_change_scene((scovil::object_scene*)in_object);
		}
	}

void set_resolution_change_scene(int x, int y)
	{
	if (top_change)
		top_change->set_resolution(vec2(x, y));
	}

void set_near_change_scene(float in_near)
	{
	if (top_change)
		top_change->set_near(in_near);
	}

void set_far_change_scene(float in_far)
	{
	if (top_change)
		top_change->set_far(in_far);
	}

void set_aspect_change_scene(float in_aspect)
	{
	if (top_change)
		top_change->set_aspect(in_aspect);
	}

void commit_change_scene()
	{
	scovil::add_change(top_change);
	top_change = NULL;
	}


