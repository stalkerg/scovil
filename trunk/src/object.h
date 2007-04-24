// Object class headerfile

#ifndef OBJECT
#define OBJECT

#include <list>
#include <iostream>
#include <GL/gl.h>

namespace scovil
	{
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
		void del_object(object *in_object);
		};

	class object_change
		{
		public:
		object *body_object_null, *upper_object;
		bool upper_object_change;
		virtual void apply();
		};
	}
#endif

