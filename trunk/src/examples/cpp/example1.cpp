#include <SDL.h>
#include "../../object.h"
#include "../../init.h"
#include "../../main_cycle.h"
#include "../../object_scene.h"
#include "../../object_dot.h"
#include "../../object_line.h"
#include "../../object_triangle.h"


int main()
{
set_options(640, 480, 32, true, false);
set_caption("Example1", "Test Example 1");

object *first_object = new object_scene;
set_head_object(first_object);

//делаем глазки :)
object_dot *dot1 = new object_dot(vec3(-0.2, 0.7, 0.0));
dot1->size = 16;
dot1->color = color4(1.0, 0, 0, 1.0);
first_object->add_object(dot1);

object_dot *dot2 = new object_dot(vec3(0.2, 0.7, 0.0));
dot2->size = 16;
dot2->color = color4(1.0, 0, 0, 1.0);
first_object->add_object(dot2);

//делаем ротик :)
object_line *line1 = new object_line(vec3(0, 0, 0), vec3(0.5, 0.5, 0));
line1->width=3;
first_object->add_object(line1);

object_line *line2 = new object_line(vec3(0, 0, 0), vec3(-0.5, 0.5, 0));
line2->width=3;
first_object->add_object(line2);

object_triangle *triangle = new object_triangle(vec3(0, 0.3, 0), vec3(-0.3, 0, 0), vec3(0.3, 0, 0));
triangle->mat_cord = vec3(0, 0.5, 0);
triangle->color1 = color4(1.0, 0.0, 0.0, 1.0);
triangle->color2 = color4(0.0, 1.0, 0.0, 1.0);
triangle->color3 = color4(0.0, 0.0, 1.0, 1.0);
first_object->add_object(triangle);


SDL_Thread *cyle_thread = init_cycle();
SDL_WaitThread(cyle_thread, NULL);

return 0;
}

