from pyinterscovil import *

first_object = 0
global_edit = False
global_edit_object = False

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