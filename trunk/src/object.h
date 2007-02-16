// Object class headerfile

#ifndef OBJECT
#define OBJECT

#include <list>

class object
	{
	public:
	std::list<object*> lower_objects; // list lower objects
	object *upper_object; //upper for this object
	virtual void draw();
	};

#endif

