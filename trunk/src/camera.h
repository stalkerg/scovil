#ifndef CAMERA
#define CAMERA

#include "object.h"
#include "mathlib.h"


namespace scovil
	{
	class camera
		{
		public:
		mat4 matrix;
		};

	class  object_change_camera:public object_change
		{
		vec3 eye, dir, up;
		bool look_at_change, set_current_change;
		public:
		object_change_camera();
		object_change_camera(camera *in_camera);
		camera *body_camera;
		void default_num();
		void set_look_at(vec3 in_eye, vec3 in_dir, vec3 in_up);
		void set_current();

		virtual void apply();
		};
	}

#endif

