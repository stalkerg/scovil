#include <iostream>
#include <GL/gl.h>
#include "object_line.h"

void object_line::draw()
	{
	#ifdef DEBUG
	std::cout<<"object_line draw()"<<std::endl;
	#endif
	
	draw_line();
	}
	
void object_line::draw_line()
	{
	
/*
  glBegin (GL_LINES);
  for (float xtmp = -1.0F; float xtmp < 1.0F;float xtmp += 0.05)
    {
      glVertex2f (xtmp, -1.0);
      glVertex2f (xtmp, 1.0);
      glVertex2f (-1.0, xtmp);
      glVertex2f (1.0, xtmp);
    };
  glEnd ();
*/
glBegin (GL_LINES);
  glVertex2f (-1.0, 0.0);
  glVertex2f (1.0, 0.0);
  glVertex2f (0.0, -1.0);
  glVertex2f (0.0, 1.0);
  glEnd ();
*/
	}

	
