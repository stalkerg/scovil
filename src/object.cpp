// Object class cppfile
#include "object.h"

namespace scovil
	{
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

	void object::del_object(object *in_object)
		{
		std::list<object_container>::iterator object_iterator;
		for(object_iterator=lower_objects.begin();
		    object_iterator!=lower_objects.end();
		    ++object_iterator)
			{
			if (object_iterator->p_object==in_object)
				{
				lower_objects.erase(object_iterator);
				break;
				}
			}
		}

	void object_change::apply()
		{
		//need more beer...
		std::cout<<"object_change::apply"<<std::endl;
		}
	}

