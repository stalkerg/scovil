#ifndef TEXTURE
#define TEXTURE

#include "object.h"
#include "mathlib.h"


namespace scovil
	{
	class texture
		{
		GLuint id;
		bool is_load;
		public:
		unsigned int quality;
	
		texture();
		void bind();
		void load(std::string file_name, int in_quality=6);
		
		};

	class  object_change_texture:public object_change
		{
		bool quality_change, load_change;
		std::string file_name;
		public:
		object_change_texture();
		object_change_texture(texture *in_texture);
		texture *body_texture;
		void default_num();
		void load(std::string in_file_name);
		virtual void apply();
		};
	}

#endif

