#include "texture.h"
#include <GL/glu.h>
#include <SDL.h>
#include <SDL_image.h>

namespace scovil
	{
	texture::texture()
		{
		is_load = false;
		}
	
	void texture::bind()
		{
		if (is_load)
			{
			glEnable(GL_TEXTURE_2D);
			glBindTexture(GL_TEXTURE_2D, id);
			}
		}

	void texture::load(std::string file_name, int in_quality)
		{
		std::string t1;
		SDL_Surface *surface = NULL;
		
		t1=strrchr(file_name.c_str(),'.');
		surface = IMG_Load(file_name.c_str());
		if (!surface)
			{
			std::cout<<"Can`t load image!!!"<<std::endl;
			return;
			}
		glGenTextures(1,&id); 
		glBindTexture (GL_TEXTURE_2D, id);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
		glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
		switch(in_quality)
			{
			case 0:
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
			break;
			case 1:
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			break;
			case 2:
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
			break;
			case 3:
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			break;
			case 4:
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
			break;
			case 5:
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
			break;
			case 6:
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR_MIPMAP_LINEAR);
				glTexParameteri (GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
			break;
			}

		glTexEnvf (GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
		
		if(t1==".jpg"||t1==".JPG"||t1==".bmp"||t1==".BMP"||t1==".tga"||t1==".TGA")
			{
			gluBuild2DMipmaps (GL_TEXTURE_2D, 3, surface->w, surface->h,
					   GL_RGB, GL_UNSIGNED_BYTE, surface->pixels);
			}
		if (t1==".png") 
			{
			gluBuild2DMipmaps (GL_TEXTURE_2D, 4, surface->w, surface->h,
					   GL_RGBA, GL_UNSIGNED_BYTE, surface->pixels);
			}

		SDL_FreeSurface(surface);
		is_load = true;
		}

	object_change_texture::object_change_texture()
		{
		body_texture = new texture;
		}

	object_change_texture::object_change_texture(texture *in_texture)
		{
		body_texture = in_texture;
		}

	void object_change_texture::apply()
		{
		if (load_change)
			body_texture->load(file_name);
		
		}

	void object_change_texture::load(std::string in_file_name)
		{
		file_name = in_file_name;
		load_change = true;
		}
	
	void object_change_texture::default_num()
		{
		quality_change = false;
		load_change = false;
		}
	}
