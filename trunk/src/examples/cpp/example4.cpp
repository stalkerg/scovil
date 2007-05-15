#include <SDL.h>
#include "../../inter/options.h"
#include "../../inter/change_scene.h"
#include "../../inter/change_quads.h"
int main()
{
set_options(640, 480, 32, true, false);
set_caption("Example2", "Test Example 2");
void *first_object = create_scene();
SDL_Thread *cyle_thread = (SDL_Thread *)init_cycle();
////SDL_Delay(2000);

create_change_quads(NULL);
set_cord1_change_quads(0.0, 0.0, -1.0);
set_cord2_change_quads(0.0, 0.5, -1.0);
set_cord3_change_quads(0.5, 0.5, -1.0);
set_cord4_change_quads(0.5, 0.0, -1.0);
set_mat_cord_change_quads(0.0, 0.0, 0.0);
set_color_cord1_change_quads(0.0, 0.0, 1.0, 1.0);
set_color_cord2_change_quads(0.0, 1.0, 0.0, 1.0);
set_color_cord3_change_quads(1.0, 0.0, 0.0, 1.0);
set_color_cord4_change_quads(1.0, 0.0, 0.0, 1.0);
set_upper_object_change_quads(first_object);
commit_change_quads();

SDL_Delay(3000);

}
