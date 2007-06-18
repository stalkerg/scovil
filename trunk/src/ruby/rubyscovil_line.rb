class Line
	
	def line_init()
		@@object_line=Ruinterscovil.create_change_line(Ruinterscovil.get_null());
		Ruinterscovil.set_start_change_line(1,0,-1);
		Ruinterscovil.set_end_change_line(-1,0,-1);
		Ruinterscovil.set_width_change_line(1);
		Ruinterscovil.set_upper_object_change_line($first_object);
		Ruinterscovil.commit_change_line();
	end

	def get_line()
		return @@object_line


	end
	

	def line_start(line_start, commit = false)
		if commit == true
			Ruinterscovil.create_change_line(@@object_line);
			Ruinterscovil.set_start_change_line(line_start[0], line_start[1], line_start[2]);
			Ruinterscovil.commit_change_line();
		end
	end

	def line_end(line_end, commit = false)
		if commit == true
			Ruinterscovil.create_change_line(@@object_line);
			Ruinterscovil.set_end_change_line(line_end[0], line_end[1], line_end[2]);
			Ruinterscovil.commit_change_line();
		end
	end


	def line_start_color(line_start_color, commit = false)
		if commit == true
			Ruinterscovil.create_change_line(@@object_line);
			Ruinterscovil.set_start_color_change_line(line_start_color[0], line_start_color[1], line_start_color[2], line_start_color[3]);
			Ruinterscovil.commit_change_line();
		end

	end

	def line_end_color(line_end_color, commit = false)
		if commit == true
			Ruinterscovil.create_change_line(@@object_line);
			Ruinterscovil.set_end_color_change_line(line_end_color[0], line_end_color[1], line_end_color[2], line_end_color[3]);
			Ruinterscovil.commit_change_line();
		end

	end


	def line_direction(line_direction, commit = false)
		if commit == true
			Ruinterscovil.create_change_line(@@object_line);
			Ruinterscovil.set_direction_change_line(line_direction[0], line_direction[1], line_direction[2], line_direction[3]);
			Ruinterscovil.commit_change_line();
		end
	end	

	def line_width(line_width, commit = false)
		if commit == true
			Ruinterscovil.create_change_line(@@object_line)
			Ruinterscovil.set_width_change_line(line_width)
			Ruinterscovil.commit_change_line()
		end
	end
	
	def line_delete(in_object, commit = false)
		if commit == true
			Ruinterscovil.create_change_line(@@object_line);
			Ruinterscovil.set_delete_lower_object_change_line(in_object.get_line());
			Ruinterscovil.commit_change_line();
		end
	end



end
	