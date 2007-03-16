#include "../../scovil.h"


int main()
{
scovil::set_options(640, 480, 32, true, false);
scovil::set_caption("Example1", "Test Example 1");

scovil::object *first_object = new scovil::object_scene;
scovil::set_head_object(first_object);

//делаем глазки :)
scovil::object_dot *dot1 = new scovil::object_dot(vec3(-0.2, 0.7, 0.0));
dot1->size = 16;
dot1->color = color4(1.0, 0, 0, 1.0);
first_object->add_object(dot1);

scovil::object_dot *dot2 = new scovil::object_dot(vec3(0.2, 0.7, 0.0));
dot2->size = 16;
dot2->color = color4(1.0, 0, 0, 1.0);
first_object->add_object(dot2);

//делаем ротик :)
scovil::object_line *line1 = new scovil::object_line(vec3(0, 0, 0), vec3(0.5, 0.5, 0));
line1->start_color = color4(1.0, 0.0, 0.0, 1.0);
line1->end_color = color4(0.0, 0.0, 0.0, 1.0);
line1->width=3;
first_object->add_object(line1);

scovil::object_line *line2 = new scovil::object_line(vec3(0, 0, 0), vec3(-0.5, 0.5, 0));
line2->start_color = color4(1.0, 0.0, 0.0, 1.0);
line2->end_color = color4(0.0, 0.0, 0.0, 1.0);
line2->width=3;
first_object->add_object(line2);

scovil::object_triangle *triangle = new scovil::object_triangle(vec3(0, 0.3, 0), vec3(-0.3, 0, 0), vec3(0.3, 0, 0));
triangle->mat_cord = vec3(0, 0.5, 0);
triangle->color1 = color4(1.0, 0.0, 0.0, 1.0);
triangle->color2 = color4(0.0, 1.0, 0.0, 1.0);
triangle->color3 = color4(0.0, 0.0, 1.0, 1.0);
first_object->add_object(triangle);


SDL_Thread *cyle_thread = scovil::init_cycle();
SDL_WaitThread(cyle_thread, NULL);

return 0;
}

