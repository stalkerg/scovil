from pyinterscovil import *
from pyscovil_global import *

class camera():
	def __init__(self):
		self.object = create_change_camera(get_null())
		#commit_change_camera()
		self.edit = False
	
	def look_at(self, eye, direct, up, commit = False):
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_camera(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_look_at_change_camera(eye[0], eye[1], eye[2], \
					  direct[0], direct[1], direct[2], \
					  up[0], up[1], up[2])
		if commit:
			commit_change_camera()
			self.edit = False
			self.global_edit = False
	
	def set_current(self, commit = False):
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_camera(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_current_camera_change_camera()
		if commit:
			commit_change_camera()
			self.edit = False
			self.global_edit = False
	
	def commit(self):
		if self.edit:
			commit_change_camera()
			self.edit = False
			self.global_edit = False