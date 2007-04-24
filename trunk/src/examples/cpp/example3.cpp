#include <SDL.h>
#include "../../inter/options.h"
#include "../../inter/change_scene.h"
#include "../../inter/change_dot.h"
#include "../../inter/change_triangle.h"
int main()
{
set_options(640, 480, 32, true, false);
set_caption("Example2", "Test Example 2");
void *first_object = create_scene();
SDL_Thread *cyle_thread = (SDL_Thread *)init_cycle();
////SDL_Delay(2000);
create_change_dot(NULL);
set_cord_change_dot(0, 0, -1);
set_size_change_dot(6);
set_upper_object_change_dot(first_object);
commit_change_dot();
//SDL_Delay(2000);

create_change_triangle(NULL);
set_cord1_change_triangle(0.5, 1.0, 0.0);
set_cord2_change_triangle(-1.0, 0.0, 0.0);
set_cord3_change_triangle(0.0, 0.0, -1.0);
set_mat_cord_change_triangle(0.0, 0.4, 0.0);
set_color1_change_triangle(0.0, 0.0, -1.0, 1.0);
set_color2_change_triangle(0.0, 1.0, 0.0, 1.0);
set_color3_change_triangle(1.0, 0.0, 0.0, 1.0);
set_upper_object_change_triangle(first_object);
commit_change_triangle();
SDL_Delay(3000);

}
