import sys
import math
import pygame, random
from OpenGL.GL import *
from OpenGL.GLU import *


size = width, height = 640, 480
pygame.init()
screen = pygame.display.set_mode(size, pygame.OPENGL|pygame.DOUBLEBUF)
glClearColor(0.0, 0.0, 0.0, 0.0)	# This Will Clear The Background Color To Black
glClearDepth(1.0)					# Enables Clearing Of The Depth Buffer
glDepthFunc(GL_LESS)				# The Type Of Depth Test To Do
glEnable(GL_DEPTH_TEST)				# Enables Depth Testing
glShadeModel(GL_SMOOTH)				# Enables Smooth Color Shading

glMatrixMode(GL_PROJECTION)
glLoadIdentity()					# Reset The Projection Matrix
										# Calculate The Aspect Ratio Of The Window
gluPerspective(90.0, float(size[0])/float(size[1]), 0.01, 100.0)
glMatrixMode(GL_MODELVIEW)
glPolygonMode(GL_FRONT_AND_BACK, GL_LINE)

#glShadeModel(GL_SMOOTH);
glEnable(GL_POINT_SMOOTH)
glEnable(GL_BLEND)
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)
glEnable(GL_DEPTH_TEST)
glEnable(GL_ALPHA_TEST)

ticknow = 0
bfps = 0
fps = 0
ticklast = 0

dots = []
for i in xrange(1000):
	cords =  [random.uniform(1, 4)-2, random.uniform(1, 4)-2, -1]
	dots.append([cords, int(random.uniform(2, 6))])

def draw_dot():
	for i in dots:
		glDisable(GL_TEXTURE_2D);
		glPushMatrix()
		glPointSize(i[1])
		glBegin(GL_POINTS)
		glVertex3f(i[0][0], i[0][1], i[0][2])
		glEnd()
		glPopMatrix()

while True:
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
	glPushMatrix()
	glTranslatef(0,0,-2)
	draw_dot()
	glPopMatrix()
	pygame.display.flip()
	
	ticklast=ticknow
	ticknow=pygame.time.get_ticks()
	cycletiks=ticknow-ticklast
	bfps+=cycletiks
	fps+=1
	#print pygame.time.get_ticks
	if bfps>1000:
		print "fps:", fps
		fps = 0;
		bfps = 0;
		