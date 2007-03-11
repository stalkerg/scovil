#include <SDL.h>
#include "../../object.h"
#include "../../init.h"
#include "../../main_cycle.h"
#include "../../object_scene.h"
#include "../../object_dot.h"
#include "../../object_line.h"
int main()
{
set_options(640, 480, 32, true, false);
set_caption("Example1", "Test Example 1");




object *first_object = new object_scene;
set_head_object(first_object);//делаем глазки :)
object_dot *dot1 = new object_dot;
dot1->cord.x = -0.2;
dot1->cord.y = 0.7;
dot1->cord.z = 0.9;
first_object->add_object(dot1);

object_dot *dot2 = new object_dot;
dot2->cord.x = 0.2;
dot2->cord.y = 0.7;
dot2->cord.z = 0.9;
first_object->add_object(dot2);

object *second_object = new object_scene;
//set_head_object(second_object);//делаем ротик :)
object_line *line1 = new object_line;
line1->cord.x = 0;
line1->cord.y = 0;
line1->cord.z = 0;
line1->cord2.x =1;
line1->cord2.y =1;
line1->cord2.z =3;
second_object->add_object(line1);

object_line *line2 = new object_line;
line2->cord.x = 0;
line2->cord.y = 0;
line2->cord.z = 0;
line2->cord2.x =-1;
line2->cord2.y =1;
line2->cord2.z =3;
second_object->add_object(line2);

SDL_Thread *cyle_thread = init_cycle();
SDL_WaitThread(cyle_thread, NULL);

return 0;
}
