#ifndef I_CHANGE_TRIANGLE
#define I_CHANGE_TRIANGLE

void *create_change_triangle(void *in_object);
void set_cord1_change(float x1, float y1, float z1);
void set_cord2_change(float x2, float y2, float z2);
void set_cord3_change(float x3, float y3, float z3);
void set_mat_cord_change(float x, float y, float z);
void set_color1_change(float r, float g, float b, float a);
void set_color2_change(float r, float g, float b, float a);
void set_color3_change(float r, float g, float b, float a);
void set_upper_object_change_triangle(void *in_object);
void commit_change_triangle();

#endif
