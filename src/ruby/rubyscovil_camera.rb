
class Camera

	def look_at(pos=[0, 0, 2, 0, 0, -1, 0, 1, 0])
		@@object_dot=Ruinterscovil.create_change_camera(Ruinterscovil.get_null());
		Ruinterscovil.set_look_at_change_camera(pos[0], pos[1], pos[2], pos[3], pos[4], pos[5], pos[6], pos[7], pos[8]);
		Ruinterscovil.set_current_camera_change_camera();
		Ruinterscovil.commit_change_camera();

	end



end





