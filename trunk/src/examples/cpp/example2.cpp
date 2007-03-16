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
scovil::set_options(640, 480, 32, true, false);
scovil::set_caption("Example1", "Test Example 1");

scovil::object *first_object = new scovil::object_scene;
scovil::set_head_object(first_object);

//делаем глазки :)
scovil::object_dot *dot1 = new scovil::object_dot(vec3(-0.2, 0.0, 0.0));
dot1->size = 16;
dot1->color = color4(1.0, 0, 0, 1.0);
first_object->add_object(dot1);

scovil::object_dot *dot2 = new scovil::object_dot(vec3(0.2, 0.0, 0.0));
dot2->size = 16;
dot2->color = color4(1.0, 0, 0, 1.0);
first_object->add_object(dot2);

SDL_Thread *cyle_thread = scovil::init_cycle();
SDL_Delay(1000);
float iter=0;
while(iter<0.7)
	{
	scovil::object_change_dot *dot2_change = new scovil::object_change_dot(dot2);
	scovil::object_change_dot *dot1_change = new scovil::object_change_dot(dot1);
	dot2_change->set_cord(vec3(0.2, iter, 0.0));
	dot1_change->set_cord(vec3(-0.2, -iter, 0.0));
	scovil::add_change(dot2_change);
	scovil::add_change(dot1_change);
	iter+=0.01;
	SDL_Delay(50);
	}

SDL_WaitThread(cyle_thread, NULL);
return 0;
}

