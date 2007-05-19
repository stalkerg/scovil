from pyinterscovil import *
from pyscovil_global import *

class line():
	def __init__(self, upper = first_object, start = [0,0,0], end = [1,1,1], width = 1):
		self.object = create_change_line(get_null())
		self.start = start
		self.end = end
		self.start_color = [1,1,1,1]
		self.end_color = [1,1,1,1]
		self.width = width
		self.direction = [0, 0, 0, 0]
		set_start_change_line(self.start[0], self.start[1], self.start[2])
		set_end_change_line(self.end[0], self.end[1], self.end[2])
		set_width_change_line(self.width)
		set_upper_object_change_line(upper.object)
		commit_change_line()
		self.edit = False
	
	def set_start(self, start, commit = False):
		self.start = start
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_line(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_start_change_line(self.start[0], self.start[1], self.start[2])
		if commit:
			commit_change_line()
			self.edit = False
			self.global_edit = False
	
	def set_end(self, end, commit = False):
		self.end = end
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_line(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_end_change_line(self.end[0], self.end[1], self.end[2])
		if commit:
			commit_change_line()
			self.edit = False
			self.global_edit = False
	
	def set_start_color(self, start_color, commit = False):
		self.start_color = start_color
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_line(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_start_color_change_line(self.start_color[0], self.start_color[1],\
					    self.start_color[2], self.start_color[3])
		if commit:
			commit_change_line()
			self.edit = False
			self.global_edit = False
	
	def set_end_color(self, end_color, commit = False):
		self.end_color = end_color
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_line(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_end_color_change_line(self.end_color[0], self.end_color[1],\
					    self.end_color[2], self.end_color[3])
		if commit:
			commit_change_line()
			self.edit = False
			self.global_edit = False
	
	def set_direction(self, direction, commit = False):
		self.direction = direction
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_line(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_direction_change_line(self.direction[0], self.direction[1], self.direction[2], self.direction[3])
		if commit:
			commit_change_line()
			self.edit = False
			self.global_edit = False
	
	def set_width(self, width, commit = False):
		self.width = width
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_line(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord_change_line(self.width)
		if commit:
			commit_change_line()
			self.edit = False
			self.global_edit = False
	
	def commit(self):
		if self.edit:
			commit_change_line()
			self.edit = False
			self.global_edit = False
	
	def delete_lower(self, in_object, commit = False):
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_line(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_delete_lower_object_change_line(in_object.object)
		if commit:
			commit_change_line()
			self.edit = False
			self.global_edit = False