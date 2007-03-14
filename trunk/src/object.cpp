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

void object_change::apply()
	{
	//need more beer...
	std::cout<<"object_change::apply"<<std::endl;
	}


