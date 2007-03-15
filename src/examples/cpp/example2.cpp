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
object_dot *dot1 = new object_dot(vec3(-0.2, 0.0, 0.0));
dot1->size = 16;
dot1->color = color4(1.0, 0, 0, 1.0);
first_object->add_object(dot1);

object_dot *dot2 = new object_dot(vec3(0.2, 0.0, 0.0));
dot2->size = 16;
dot2->color = color4(1.0, 0, 0, 1.0);
first_object->add_object(dot2);

SDL_Thread *cyle_thread = init_cycle();
SDL_Delay(1000);
float iter=0;
while(iter<0.7)
	{
	object_change_dot *dot2_change = new object_change_dot(dot2);
	object_change_dot *dot1_change = new object_change_dot(dot1);
	dot2_change->set_cord(vec3(0.2, iter, 0.0));
	dot1_change->set_cord(vec3(-0.2, -iter, 0.0));
	add_change(dot2_change);
	add_change(dot1_change);
	iter+=0.01;
	SDL_Delay(20);
	}

SDL_WaitThread(cyle_thread, NULL);
return 0;
}

