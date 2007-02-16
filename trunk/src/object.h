// Object class file
#ifndef OBJECT
#define OBJECT

#include <list>

class object
	{
	std::list<object> child_objects;
	virtual void draw();
	
	};

#endif

