#ifndef I_CHANGE_SCENE
#define I_CHANGE_SCENE

void *create_scene();

void create_change_scene(void *in_object);

void set_resolution_change_scene(int x, int y);
void set_near_change_scene(float in_near);
void set_far_change_scene(float in_far);
void set_aspect_change_scene(float in_aspect);
void set_delete_lower_object_change_scene(void *in_object);
void commit_change_scene();

#endif

