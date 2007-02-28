// Object class headerfile

#ifndef OBJECT
#define OBJECT

#include <list>

class object
	{
	public:
	
	struct object_container
		{
		object *p_object;
		};
	std::list<object_container> lower_objects; // list lower objects
	object *upper_object; //upper for this object
	virtual void draw() {};
	};

#endif

