// Object class headerfile

#ifndef OBJECT
#define OBJECT

#include <list>
#include <iostream>

class object
	{
	public:
	
	struct object_container
		{
		object_container(object *in_object);
		object *p_object;
		};
	std::list<object_container> lower_objects; // list lower objects
	object *upper_object; //upper for this object
	virtual void draw() {};
	void add_object(object *in_object);
	};

#endif

