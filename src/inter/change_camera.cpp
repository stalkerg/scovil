#include "change_camera.h"
#include "../camera.h"
#include "../main_cycle.h"

static scovil::object_change_camera *top_change = NULL;

void *create_change_camera(void *in_object)
	{
	if (top_change)
		commit_change_camera();
	if (in_object)
		{
		top_change = new scovil::object_change_camera((scovil::camera*)in_object);
		return NULL;
		}
	else
		{
		top_change = new scovil::object_change_camera();
		return top_change->body_camera;
		}
	}

void set_look_at_change_camera(float eye_x, float eye_y, float eye_z,
			       float dir_x, float dir_y, float dir_z,
			       float up_x, float up_y, float up_z)
	{
	if (top_change)
		top_change->set_look_at(vec3(eye_x, eye_y, eye_z),
					vec3(dir_x, dir_y, dir_z),
					vec3(up_x, up_y, up_z));
	}

void set_current_camera_change_camera()
	{
	if (top_change)
		top_change->set_current();
	}

void commit_change_camera()
	{
	scovil::add_change(top_change);
	top_change = NULL;
	}



