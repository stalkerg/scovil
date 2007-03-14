#ifndef MAIN_CYCLE
#define MAIN_CYCLE

#include "object.h"

int main_cycle(void *unused);
void set_head_object(object *in_object);
std::list<object_change> *get_change_list();

#endif
