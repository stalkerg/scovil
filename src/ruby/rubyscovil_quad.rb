class Quad
	def quad_init()
		@@object_quad  = Ruinterscovil.create_change_quad(Ruinterscovil.get_null());
		Ruinterscovil.set_cord1_change_quad(0, 0, 0);
		Ruinterscovil.set_cord2_change_quad(1,0,0);
		Ruinterscovil.set_cord3_change_quad(1,1,0);
		Ruinterscovil.set_cord4_change_quad(0,1,0);
		Ruinterscovil.set_upper_object_change_quad($first_object);
		Ruinterscovil.commit_change_quad();
		
	end

	def get_quad()
		return @@object_quad


	end

	def quad_cord1(quad_cord1, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad)
			Ruinterscovil.set_cord1_change_quad(quad_cord1[0], quad_cord1[1], quad_cord1[2])
			Ruinterscovil.commit_change_quad();
		end
	end	
	
	def quad_cord2(quad_cord2, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad)
			Ruinterscovil.set_cord2_change_quad(quad_cord2[0], quad_cord2[1], quad_cord2[2])
			Ruinterscovil.commit_change_quad();
		end
	end	


	def quad_cord3(quad_cord3, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad)
			Ruinterscovil.set_cord3_change_quad(quad_cord3[0], quad_cord3[1], quad_cord3[2])
			Ruinterscovil.commit_change_quad();
		end
	end	

	def quad_cord4(quad_cord4, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad)
			Ruinterscovil.set_cord4_change_quad(quad_cord4[0], quad_cord4[1], quad_cord4[2])
			Ruinterscovil.commit_change_quad();
		end
	end	

		
	def quad_color1(quad_color1, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad);
			Ruinterscovil.set_color1_change_quad(quad_color1[0], quad_color1[1], quad_color1[2], quad_color3[3]);
			Ruinterscovil.commit_change_quad();
		end
	end	
	
	def quad_color1(quad_color1, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad);
			Ruinterscovil.set_color1_change_quad(quad_color1[0], quad_color1[1], quad_color1[2], quad_color3[3]);
			Ruinterscovil.commit_change_quad();
		end
	end	

	def quad_color2(quad_color2, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad);
			Ruinterscovil.set_color2_change_quad(quad_color2[0], quad_color2[1], quad_color2[2], quad_color2[3]);
			Ruinterscovil.commit_change_quad();
		end
	end	

	def quad_color3(quad_color3, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad);
			Ruinterscovil.set_color3_change_quad(quad_color3[0], quad_color3[1], quad_color3[2], quad_color3[3]);
			Ruinterscovil.commit_change_quad();
		end
	end	

	def quad_color4(quad_color4, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad);
			Ruinterscovil.set_color4_change_quad(quad_color4[0], quad_color4[1], quad_color4[2], quad_color4[3]);
			Ruinterscovil.commit_change_quad();
		end
	end	


	def quad_direction(quad_direction, commit = false)
		if commit == true
		
			Ruinterscovil.create_change_quad(@@object_quad);
			Ruinterscovil.set_direction_change_quad(quad_direction[0], quad_direction[1], quad_direction[2], quad_direction[3]);
			Ruinterscovil.commit_change_quad();
		end	
	
	def quad_mat_cord(quad_cord, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad);
			Ruinterscovil.set_mat_cord_change_quad(quad_mat_cord[0], quad_mat_cord[1], quad_mat_cord[2]);
			Ruinterscovil.commit_change_quad();
		end
	end	
	
	def quad_texture(quad_texture, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad);
			@@quad_texture=quad_texture
			Ruinterscovil.set_texture_change_quad(@@quad_texture);
			Ruinterscovil.commit_change_quad();
		end
	end	
	
		
	def quad_delete(in_object, commit = false)
		if commit == true
			Ruinterscovil.create_change_quad(@@object_quad);
			Ruinterscovil.set_delete_lower_object_change_quad(in_object.get_quad());
			Ruinterscovil.commit_change_quad()
		end
	end	


end

end