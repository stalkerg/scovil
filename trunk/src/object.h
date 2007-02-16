// Object class file
#ifndef OBJECT
#define OBJECT

#include <list>

class object
	{
	std::list<object*> lower_objects;
	object *upper_object;
	virtual void draw();
	};

#endif

