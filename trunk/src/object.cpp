// Object class cppfile
#include "object.h"

object::object_container::object_container(object *in_object)
	{
	p_object = in_object;
	}

void object::add_object(object *in_object)
	{
	object_container tmp_container(in_object);
	in_object->upper_object = this;
	lower_objects.push_back(in_object);
	}

object_change::object_change()
	{
	id = NULL_CHANGE;
	}

int object_change::get_id()
	{
	return id;
	}
void object_change::set_id(int in_id)
	{
	id = in_id;
	}


