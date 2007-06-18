
class Triangle
	def triangle_init()
		@@object_triangle = Ruinterscovil.create_change_triangle(Ruinterscovil.get_null());
		Ruinterscovil.set_cord1_change_triangle(0, 0.3, -1)
		Ruinterscovil.set_cord2_change_triangle(-0.3, 0, -1)
		Ruinterscovil.set_cord3_change_triangle(0.3, 0, -1)
		Ruinterscovil.set_upper_object_change_triangle($first_object)
		Ruinterscovil.commit_change_triangle()
	end

	def get_triangle()
		return @@object_triangle


	end

	def triangle_cord1(triangle_cord1, commit = false)
		if commit == true
			Ruinterscovil.create_change_triangle(@@object_triangle)
			Ruinterscovil.set_cord1_change_triangle(triangle_cord1[0], triangle_cord1[1], triangle_cord1[2]);
			Ruinterscovil.commit_change_triangle()
		end

	end

	def triangle_cord2(triangle_cord2, commit = false)
		if commit == true
			Ruinterscovil.create_change_triangle(@@object_triangle)
			Ruinterscovil.set_cord2_change_triangle(triangle_cord2[0], triangle_cord2[1], triangle_cord2[2]);
			Ruinterscovil.commit_change_triangle()
		end

	end

	def triangle_cord3(triangle_cord3, commit = false)
		if commit == true
			Ruinterscovil.create_change_triangle(@@object_triangle)
			Ruinterscovil.set_cord1_change_triangle(triangle_cord3[0], triangle_cord3[1], triangle_cord3[2]);
			Ruinterscovil.commit_change_triangle()
		end

	end

	def triangle_color1(triangle_color1, commit = false)
		if commit == true
			Ruinterscovil.create_change_triangle(@@object_triangle)
			Ruinterscovil.set_color1_change_triangle(triangle_color1[0], triangle_color1[1], triangle_color1[2], triangle_color1[3])
			Ruinterscovil.commit_change_triangle()
		end
	end	

	def triangle_color2(triangle_color2, commit = false)
		if commit == true
			Ruinterscovil.create_change_triangle(@@object_triangle)
			Ruinterscovil.set_color2_change_triangle(triangle_color2[0], triangle_color2[1], triangle_color2[2], triangle_color2[3])
			Ruinterscovil.commit_change_triangle()
		end
	end	

	def triangle_color3(triangle_color3, commit = false)
		if commit == true
			Ruinterscovil.create_change_triangle(@@object_triangle)
			Ruinterscovil.set_color3_change_triangle(triangle_color3[0], triangle_color3[1], triangle_color3[2], triangle_color3[3])
			Ruinterscovil.commit_change_triangle()
		end
	end	

	def triangle_direction(triangle_direction, commit = false)
		if commit == true
			Ruinterscovil.create_change_triangle(@@object_triangle)
			Ruinterscovil.set_direction_change_triangle(triangle_direction[0], triangle_direction[1], triangle_direction[2], triangle_direction[3])
			Ruinterscovil.commit_change_triangle()
		end
	end	

	def triangle_delete(in_object, commit = false)
		if commit == true
			Ruinterscovil.create_change_triangle(@@object_triangle);
			Ruinterscovil.set_delete_lower_object_change_triangle(in_object.get_triangle());
			Ruinterscovil.commit_change_line();
		end
	end


end