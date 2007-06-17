from pyinterscovil import *
from pyscovil_global import *

class dot():
	def __init__(self, upper = first_object, cord = [0,0,0], size = 1):
		self.object = create_change_dot(get_null())
		self.cord = cord
		self.size = size
		self.color = [1,1,1,1]
		self.direction = [0, 0, 0, 0]
		set_cord_change_dot(self.cord[0], self.cord[1], self.cord[2])
		set_size_change_dot(self.size)
		set_upper_object_change_dot(upper.object)
		commit_change_dot()
		self.edit = False
	
	def set_cord(self, cord, commit = False):
		self.cord = cord
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_dot(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord_change_dot(self.cord[0], self.cord[1], self.cord[2])
		if commit:
			commit_change_dot()
			self.edit = False
			self.global_edit = False
	
		
	def set_color(self, color, commit = False):
		self.color = color
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_dot(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_color_change_dot(self.color[0], self.color[1], self.color[2], self.color[3])
		if commit:
			commit_change_dot()
			self.edit = False
			self.global_edit = False
	
	def set_direction(self, direction, commit = False):
		self.direction = direction
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_dot(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_direction_change_dot(self.direction[0], self.direction[1], self.direction[2], self.direction[3])
		if commit:
			commit_change_dot()
			self.edit = False
			self.global_edit = False
	
	def set_size(self, size, commit = False):
		self.size = size
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_dot(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord_change_dot(self.size)
		if commit:
			commit_change_dot()
			self.edit = False
			self.global_edit = False
	
	def commit(self):
		if self.edit:
			commit_change_dot()
			self.edit = False
			self.global_edit = False
	
	def delete_lower(self, in_object, commit = False):
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_dot(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_delete_lower_object_change_dot(in_object.object)
		if commit:
			commit_change_dot()
			self.edit = False
			self.global_edit = False