#include <SDL.h>
#include "../../object.h"
#include "../../init.h"
#include "../../main_cycle.h"
#include "../../object_scene.h"

int main()
{
set_options(640, 480, 32, true, false);
set_caption("Example1", "Test Example 1");
object *first_object = new object_scene;
set_head_object(first_object);
SDL_Thread *cyle_thread = init_cycle();
SDL_WaitThread(cyle_thread, NULL);
return 0;
}
