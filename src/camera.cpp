#include "camera.h"
#include "main_cycle.h"

namespace scovil
	{
	object_change_camera::object_change_camera()
		{
		body_camera = new camera;
		}

	object_change_camera::object_change_camera(camera *in_camera)
		{
		body_camera = in_camera;
		}

	void object_change_camera::apply()
		{
		if (look_at_change)
			body_camera->matrix.look_at(eye, dir, up);
		if (set_current_change)
			set_current_camera(body_camera);
		
		}

	void object_change_camera::set_look_at(vec3 in_eye, vec3 in_dir, vec3 in_up)
		{
		look_at_change = true;
		eye = in_eye;
		dir = in_dir;
		up = in_up;
		}

	void object_change_camera::set_current()
		{
		set_current_change = true;
		}

	void object_change_camera::default_num()
		{
		look_at_change = false;
		set_current_change = false;
		}
	}

