#ifndef MAIN_CYCLE
#define MAIN_CYCLE

#include "object.h"

namespace scovil
	{
	int main_cycle(void *unused);
	void set_head_object(object *in_object);
	void add_change(object_change *in_change);
	}

#endif
