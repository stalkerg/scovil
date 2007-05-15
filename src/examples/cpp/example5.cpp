#include <SDL.h>
#include "../../inter/options.h"
#include "../../inter/change_scene.h"
#include "../../inter/change_quad.h"
#include "../../inter/change_camera.h"

int main()
{
set_options(640, 480, 32, true, false);
set_caption("Example5", "Test Example 5");
void *first_object = create_scene();
SDL_Thread *cyle_thread = (SDL_Thread *)init_cycle();
////SDL_Delay(2000);

create_change_quad(NULL);
set_cord1_change_quad(0.0, 0.0, -1.0);
set_cord2_change_quad(0.0, 0.5, -1.0);
set_cord3_change_quad(0.5, 0.5, -1.0);
set_cord4_change_quad(0.5, 0.0, -1.0);
set_mat_cord_change_quad(0.0, 0.0, 0.0);
set_color1_change_quad(0.0, 0.0, 1.0, 1.0);
set_color2_change_quad(0.0, 1.0, 0.0, 1.0);
set_color3_change_quad(1.0, 0.0, 0.0, 1.0);
set_color4_change_quad(1.0, 0.0, 0.0, 1.0);
set_upper_object_change_quad(first_object);
commit_change_quad();

SDL_Delay(1000);

create_change_camera(NULL);
set_look_at_change_camera(0, 0, 2, 0, 0, -1, 0, 1, 0);
set_current_camera_change_camera();
commit_change_camera();

SDL_Delay(4000);

}
