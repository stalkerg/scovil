from pyinterscovil import *
from pyscovil_global import *

class texture():
	def __init__(self, file=""):
		self.object = create_change_texture(get_null())
		if len(file)>0:
			set_load_change_texture(file)
			self.filename = file
		commit_change_texture()
		self.edit = False
	
	
	def load(self, file, commit = False):
		if not self.edit:
			if global_edit:
				global_edit_object.commit()
			create_change_texture(self.object)
			global_edit_object = self.object
			self.edit = True
			self.global_edit = True
		set_load_change_texture(file)
		self.filename = file
		if commit:
			commit_change_texture()
			self.edit = False
			self.global_edit = False
	
	def commit(self):
		if self.edit:
			commit_change_texture()
			self.edit = False
			self.global_edit = False