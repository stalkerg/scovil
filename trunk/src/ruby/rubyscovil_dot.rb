require 'rubyscovil_global'

	
class Dot
	
	def initialize()
		@@object_dot=Ruinterscovil.create_change_dot(Ruinterscovil.get_null());
		Ruinterscovil.set_cord_change_dot(0, 0, -1);
		Ruinterscovil.set_size_change_dot(5);
		Ruinterscovil.set_upper_object_change_dot($first_object);
		Ruinterscovil.commit_change_dot();

	end

	def get_dot()

		return @@object_dot;

	end
	
	def dot_cord(dot_cord = [0,0,-1], commit = false)
		
		if commit == true	
			Ruinterscovil.create_change_dot(@@object_dot)
			Ruinterscovil.set_cord_change_dot(dot_cord[0], dot_cord[1], dot_cord[2]);
			Ruinterscovil.commit_change_dot();
		end
	end

	def dot_size(dot_size=5, commit = false)
		
		if commit == true
			Ruinterscovil.create_change_dot(@@object_dot);
			Ruinterscovil.set_size_change_dot(dot_size);
			Ruinterscovil.commit_change_dot();
		end	



	end


	def dot_color(dot_color, commit = false)

		if commit == true
			Ruinterscovil.create_change_dot(@@object_dot);
			Ruinterscovil.set_color_change_dot(dot_color[0], dot_color[1], dot_color[2], dot_color[3])
			Ruinterscovil.commit_change_dot();
		end
	end

	
	def dot_mat_cord(dot_mat_cord, commit = false)
		if commit == true
			Ruinterscovil.create_change_dot(@@object_dot);
			Ruinterscovil.set_mat_cord_change_dot(dot_mat_cord[0], dot_mat_cord[1], dot_mat_cord[2])
			Ruinterscovil.commit_change_dot();

		end


	end

	def dot_direction(dot_direction, commit = false)
		
		if commit == true
			Ruinterscovil.create_change_dot(@@object_dot);
			Ruinterscovil.set_direction_change_dot(dot_direction[0], dot_direction[1], dot_direction[2], dot_direction[3])
		end
	end
	

	def dot_delete(in_object, commit = false)
		if commit == true
			Ruinterscovil.create_change_dot(@@object_dot);
			Ruinterscovil.set_delete_lower_object_change_dot(in_object.get_dot())
			Ruinterscovil.commit_change_dot();
		end
	end

	def dot_upper(upper_object, commit = false)
		if commit == true
			Ruinterscovil.create_change_dot(@@object_dot);
			@dot_upper_object=upper_object.get_dot
			Ruinterscovil.set_upper_object_change_dot(@dot_upper_object);
			Ruinterscovil.commit_change_dot();
		end
	end

end



