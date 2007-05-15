#ifndef I_CHANGE_CAMERA
#define I_CHANGE_CAMERA

void *create_change_camera(void *in_object);
void set_look_at_change_camera(float eye_x, float eye_y, float eye_z,
			       float dir_x, float dir_y, float dir_z,
			       float up_x, float up_y, float up_z);
void set_current_camera_change_camera();
void commit_change_camera();

#endif
