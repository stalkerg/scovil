#ifndef MAIN_CYCLE
#define MAIN_CYCLE

#include "object.h"
#include "camera.h"

namespace scovil
	{
	int main_cycle(void *unused);
	void set_head_object(object *in_object);
	void add_change(object_change *in_change);
	void set_current_camera(camera *in_camera);
	}

#endif
