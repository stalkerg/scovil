#ifndef I_CHANGE_DOT
#define I_CHANGE_DOT

void *create_change_dot(void *in_object);
void set_cord_change_dot(float x, float y, float z);
void set_mat_cord_change_dot(float x, float y, float z);
void set_direction_change_dot(float x, float y, float z, float angle);
void set_color_change_dot(float r, float g, float b, float a);
void set_size_change_dot(int size);
void set_upper_object_change_dot(void *in_object);
void set_delete_lower_object_change_dot(void *in_object);
void commit_change_dot();

#endif

