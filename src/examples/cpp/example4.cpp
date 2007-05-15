#include <SDL.h>
#include "../../inter/options.h"
#include "../../inter/change_scene.h"
#include "../../inter/change_quad.h"
int main()
{
set_options(640, 480, 32, true, false);
set_caption("Example4", "Test Example 4");
void *first_object = create_scene();
SDL_Thread *cyle_thread = (SDL_Thread *)init_cycle();
////SDL_Delay(2000);

create_change_quad(NULL);

//Строит по координатам четырех точек
/*
set_cord1_change_quad(0.0, 0.0, -1.0);
set_cord2_change_quad(0.0, 0.5, -1.0);
set_cord3_change_quad(0.5, 0.5, -1.0);
set_cord4_change_quad(0.5, 0.0, -1.0);
*/

//Строит по двум точкам верхней левой и нижней правой 
//set_cord_a_b_change_quad(0.0,0.0,-1.0,0.5,0.5,-1.0);

//Строит по начальной точке четырехугольника (левую нижнюю) и ширины (h) и высоты (v)
set_cord_h_v_change_quad(-0.8,-0.8,-1.0,1.5,1.0);

set_mat_cord_change_quad(0.0, 0.0, 0.0);
set_color1_change_quad(0.0, 0.0, 1.0, 1.0);
set_color2_change_quad(0.0, 1.0, 0.0, 1.0);
set_color3_change_quad(1.0, 0.0, 0.0, 1.0);
set_color4_change_quad(1.0, 0.0, 0.0, 1.0);
set_upper_object_change_quad(first_object);
commit_change_quad();

SDL_Delay(3000);

}
