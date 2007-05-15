#ifndef I_CHANGE_QUADS
#define I_CHANGE_QUADS

void *create_change_quads(void *in_object);
void set_cord1_change_quads(float x1, float y1, float z1);
void set_cord2_change_quads(float x2, float y2, float z2);
void set_cord3_change_quads(float x3, float y3, float z3);
void set_cord4_change_quads(float x4, float y4, float z4);
void set_mat_cord_change_quads(float x, float y, float z);
void set_direction_change_quads(float x, float y, float z, float angle);
void set_color_cord1_change_quads(float r, float g, float b, float a);
void set_color_cord2_change_quads(float r, float g, float b, float a);
void set_color_cord3_change_quads(float r, float g, float b, float a);
void set_color_cord4_change_quads(float r, float g, float b, float a);
void set_upper_object_change_quads(void *in_object);
void commit_change_quads();

#endif
