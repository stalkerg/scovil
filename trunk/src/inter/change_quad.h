#ifndef I_CHANGE_QUAD
#define I_CHANGE_QUAD

void *create_change_quad(void *in_object);
void set_cord1_change_quad(float x1, float y1, float z1);
void set_cord2_change_quad(float x2, float y2, float z2);
void set_cord3_change_quad(float x3, float y3, float z3);
void set_cord4_change_quad(float x4, float y4, float z4);
void set_cord_a_b_change_quad(float x1, float y1, float z1,float x3, float y3, float z3);
void set_cord_h_v_change_quad(float h, float v);
void set_mat_cord_change_quad(float x, float y, float z);
void set_direction_change_quad(float x, float y, float z, float angle);
void set_color1_change_quad(float r, float g, float b, float a);
void set_color2_change_quad(float r, float g, float b, float a);
void set_color3_change_quad(float r, float g, float b, float a);
void set_color4_change_quad(float r, float g, float b, float a);
void set_texture_change_quad(void *in_texture);
void set_upper_object_change_quad(void *in_object);
void commit_change_quad();

#endif
