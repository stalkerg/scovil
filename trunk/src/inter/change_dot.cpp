#include "change_dot.h"
#include "../object.h"
#include "../object_dot.h"

static scovil::object_change_dot *top_change;

void *create_object_change_dot(void *in_object)
	{
	if (in_object)
		{
		top_change = new scovil::object_change_dot((scovil::object_dot*)in_object);
		return NULL;
		}
	else
		{
		top_change = new scovil::object_change_dot();
		return top_change->body_object_dot;
		}
	}


