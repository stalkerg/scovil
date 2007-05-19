from pyinterscovil import *

from pyscovil_global import *
from pyscovil_camera import *
from pyscovil_dot import *
from pyscovil_line import *
from pyscovil_triangle import *
from pyscovil_quad import *


class options():
	def __init__(self):
		self.width = 640
		self.height = 480
		self.bit = 32
		self.fullscreen = False
		self.doublebuffer = True
		self.caption = "PyScovil"
		self.long_caption = "PyScovil"
		self.commit()

	def __init__(self, width, height, bit, fullscreen, doublebuffer, caption, long_caption):
		self.width = width
		self.height = height
		self.bit = bit
		self.fullscreen = fullscreen
		self.doublebuffer = doublebuffer
		self.caption = caption
		self.long_caption = long_caption
		self.commit()
	
	def commit(self):
		set_caption(self.caption, self.long_caption)
		set_options(self.width, self.height, self.bit, self.doublebuffer, self.fullscreen)
		self.cyle_thread = init_cycle()


class scene():
	def __init__(self):
		self.object = create_scene()
		first_object = self.object
		self.edit = False
	
	def delete_lower(self, in_object, commit = False):
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_scene(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_delete_lower_object_change_scene(in_object.object)
		if commit:
			commit_change_scene()
			self.edit = False
			self.global_edit = False
	
	def commit(self):
		if self.edit:
			commit_change_scene()
			self.edit = False
			self.global_edit = False



