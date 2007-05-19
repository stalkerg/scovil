from pyinterscovil import *
from pyscovil_global import *

class triangle():
	def __init__(self, upper = first_object, cord1 = [0,0,0], cord2 = [0,1,0], cord3 = [0,0,1]):
		self.object = create_change_triangle(get_null())
		self.cord1 = cord1
		self.cord2 = cord2
		self.cord3 = cord3
		self.color1 = [1, 1, 1, 1]
		self.color2 = [1, 1, 1, 1]
		self.color3 = [1, 1, 1, 1]
		self.direction = [0, 0, 0, 0]
		set_cord1_change_triangle(self.cord1[0], self.cord1[1], self.cord1[2])
		set_cord2_change_triangle(self.cord2[0], self.cord2[1], self.cord2[2])
		set_cord3_change_triangle(self.cord3[0], self.cord3[1], self.cord3[2])
		set_upper_object_change_triangle(upper.object)
		commit_change_triangle()
		self.edit = False
	
	def set_cord1(self, cord1, commit = False):
		self.cord1 = cord1
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_triangle(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord1_change_triangle(self.cord1[0], self.cord1[1], self.cord1[2])
		if commit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False
	
	def set_cord2(self, cord2, commit = False):
		self.cord2 = cord2
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_triangle(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord2_change_triangle(self.cord2[0], self.cord2[1], self.cord2[2])
		if commit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False
	
	def set_cord3(self, cord3, commit = False):
		self.cord3 = cord3
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_triangle(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord3_change_triangle(self.cord3[0], self.cord3[1], self.cord3[2])
		if commit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False
	
	def set_color1(self, color1, commit = False):
		self.color1 = color1
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_triangle(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_color1_change_triangle(self.color1[0], self.color1[1], self.color1[2], self.color3[3])
		if commit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False
	
	def set_color2(self, color2, commit = False):
		self.color2 = color2
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_triangle(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_color2_change_triangle(self.color2[0], self.color2[1], self.color2[2], self.color3[3])
		if commit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False
	
	def set_color3(self, color3, commit = False):
		self.color3 = color3
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_triangle(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_color3_change_triangle(self.color3[0], self.color3[1], self.color3[2], self.color3[3])
		if commit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False
	
	def set_direction(self, direction, commit = False):
		self.direction = direction
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_triangle(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_direction_change_triangle(self.direction[0], self.direction[1], self.direction[2], self.direction[3])
		if commit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False
	
	def commit(self):
		if self.edit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False
	
	def delete_lower(self, in_object, commit = False):
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_triangle(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_delete_lower_object_change_triangle(in_object.object)
		if commit:
			commit_change_triangle()
			self.edit = False
			self.global_edit = False