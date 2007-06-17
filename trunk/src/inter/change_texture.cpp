#include "change_texture.h"
#include "../texture.h"
#include "../main_cycle.h"

static scovil::object_change_texture *top_change = NULL;

void *create_change_texture(void *in_object)
	{
	if (top_change)
		commit_change_texture();
	if (in_object)
		{
		top_change = new scovil::object_change_texture((scovil::texture*)in_object);
		return NULL;
		}
	else
		{
		top_change = new scovil::object_change_texture();
		return top_change->body_texture;
		}
	}

void set_load_change_texture(char *file)
	{
	if (top_change)
		top_change->load(file);
	}

void commit_change_texture()
	{
	scovil::add_change(top_change);
	top_change = NULL;
	}



