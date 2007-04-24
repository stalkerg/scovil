#ifndef I_CHANGE_LINE
#define I_CHANGE_LINE

void *create_change_line(void *in_object);

void set_start_line(float x, float y, float z);
void set_end_line(float x, float y, float z);
void set_mat_cord_change_line(float x, float y, float z);
void set_width_change(int in_width);
void set_start_color(float r, float g, float b,float a);
void set_end_color(float r, float g, float b, float a);
void commit_change_line();
#endif
