#ifndef I_CHANGE_LINE
#define I_CHANGE_LINE

void *create_change_line(void *in_object);
void set_start_change_line(float x, float y, float z);
void set_end_change_line(float x, float y, float z);
void set_mat_cord_change_line(float x, float y, float z);
void set_width_change(int in_width);
void set_start_color_change(float r, float g, float b,float a);
void set_end_color_change(float r, float g, float b, float a);
void set_upper_object_change_line(void *in_object);
void commit_change_line();

#endif
