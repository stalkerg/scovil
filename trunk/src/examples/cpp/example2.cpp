#include "../../scovil.h"


int main()
{
scovil::set_options(640, 480, 32, true, false);
scovil::set_caption("Example2", "Test Example 2");

scovil::object *first_object = new scovil::object_scene;
scovil::set_head_object(first_object);

SDL_Thread *cyle_thread = scovil::init_cycle();

//делаем глазки :)
scovil::object_dot *dot1, *dot2; 

scovil::object_change_dot *dot1_change, *dot2_change;
dot1_change = new scovil::object_change_dot();
dot1 = dot1_change->body_object_dot;
dot1_change->set_cord(vec3(-0.2, 0.0, -1.0));
dot1_change->set_size(16);
dot1_change->set_color(color4(1.0, 0, 0, 1.0));
dot1_change->set_upper_object(first_object);
scovil::add_change(dot1_change);

dot2_change = new scovil::object_change_dot();
dot2 = dot2_change->body_object_dot;
dot2_change->set_cord(vec3(0.2, 0.0, -1.0));
dot2_change->set_size(16);
dot2_change->set_color(color4(1.0, 0, 0, 1.0));
dot2_change->set_upper_object(first_object);
scovil::add_change(dot2_change);

scovil::object_line *line1; 
scovil::object_change_line *line1_change;
line1_change = new scovil::object_change_line();
line1 = line1_change->body_object_line;

line1_change->set_start(vec3(0.0, 0.0, -1.0));
line1_change->set_end(vec3(1.0, 1.0, -1.0));
line1_change->set_start_color(vec4(1.0, 1.0, 0.0,0.0));
line1_change->set_width(13);
line1_change->set_upper_object(first_object);
scovil::add_change(line1_change);

scovil::object_triangle *triangle1; 
scovil::object_change_triangle *triangle1_change;
triangle1_change = new scovil::object_change_triangle();
triangle1 = triangle1_change->body_object_triangle;

triangle1_change->set_cord1(vec3(0.0, 1.0, -1.0));
triangle1_change->set_cord2(vec3(-1.0, 0.0, -1.0));
triangle1_change->set_cord3(vec3(0.0, 0.0, -1.0));
triangle1_change->set_mat_cord(vec3(0.0, 0.5, -1.0));
triangle1_change->set_color1(vec3(0.0, 0.0, -1.0));
triangle1_change->set_upper_object(first_object);
scovil::add_change(triangle1_change);

SDL_Delay(1000);
float iter=0;
while(iter<0.7)
	{
	dot2_change = new scovil::object_change_dot(dot2);
	dot1_change = new scovil::object_change_dot(dot1);
	dot2_change->set_cord(vec3(0.2, iter, -1.0));
	dot1_change->set_cord(vec3(-0.2, -iter, -1.0));
	scovil::add_change(dot2_change);
	scovil::add_change(dot1_change);
	iter+=0.01;
	SDL_Delay(50);
	}

SDL_WaitThread(cyle_thread, NULL);
return 0;
}

