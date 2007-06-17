from pyinterscovil import *
from pyscovil_global import *

class quad():
	def __init__(self, upper = first_object, cord1 = [0,0,0], cord2 = [1,0,0], cord3 = [1,1,0], cord4 = [0,1,0]):
		self.object = create_change_quad(get_null())
		self.cord1 = cord1
		self.cord2 = cord2
		self.cord3 = cord3
		self.cord4 = cord4
		self.color1 = [1, 1, 1, 1]
		self.color2 = [1, 1, 1, 1]
		self.color3 = [1, 1, 1, 1]
		self.color4 = [1, 1, 1, 1]
		self.direction = [0, 0, 0, 0]
		self.mat_cord = [0, 0, 0]
		set_cord1_change_quad(self.cord1[0], self.cord1[1], self.cord1[2])
		set_cord2_change_quad(self.cord2[0], self.cord2[1], self.cord2[2])
		set_cord3_change_quad(self.cord3[0], self.cord3[1], self.cord3[2])
		set_cord4_change_quad(self.cord4[0], self.cord4[1], self.cord4[2])
		set_upper_object_change_quad(upper.object)
		commit_change_quad()
		self.edit = False
	
	def set_cord1(self, cord1, commit = False):
		self.cord1 = cord1
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord1_change_quad(self.cord1[0], self.cord1[1], self.cord1[2])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_cord2(self, cord2, commit = False):
		self.cord2 = cord2
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord2_change_quad(self.cord2[0], self.cord2[1], self.cord2[2])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_cord3(self, cord3, commit = False):
		self.cord3 = cord3
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord3_change_quad(self.cord3[0], self.cord3[1], self.cord3[2])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_cord4(self, cord4, commit = False):
		self.cord4 = cord4
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_cord4_change_quad(self.cord4[0], self.cord4[1], self.cord4[2])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_color1(self, color1, commit = False):
		self.color1 = color1
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_color1_change_quad(self.color1[0], self.color1[1], self.color1[2], self.color3[3])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_color2(self, color2, commit = False):
		self.color2 = color2
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_color2_change_quad(self.color2[0], self.color2[1], self.color2[2], self.color3[3])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_color3(self, color3, commit = False):
		self.color3 = color3
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_color3_change_quad(self.color3[0], self.color3[1], self.color3[2], self.color3[3])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_color4(self, color4, commit = False):
		self.color4 = color4
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_color4_change_quad(self.color4[0], self.color4[1], self.color4[2], self.color4[3])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_direction(self, direction, commit = False):
		self.direction = direction
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_direction_change_quad(self.direction[0], self.direction[1], self.direction[2], self.direction[3])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_mat_cord(self, cord, commit = False):
		self.mat_cord = cord
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_mat_cord_change_quad(self.mat_cord[0], self.mat_cord[1], self.mat_cord[2])
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def set_texture(self, texture, commit = False):
		self.texture = texture
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_texture_change_quad(texture.object)
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def commit(self):
		if self.edit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False
	
	def delete_lower(self, in_object, commit = False):
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_quad(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_delete_lower_object_change_quad(in_object.object)
		if commit:
			commit_change_quad()
			self.edit = False
			self.global_edit = False