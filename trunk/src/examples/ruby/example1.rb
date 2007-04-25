require 'ruinterscovil'

Ruinterscovil.set_options(640,480,32, 1, 0)
Ruinterscovil.set_caption("RbTest", "Ruby Test")

first_object = Ruinterscovil.create_scene()
cyle_thread = Ruinterscovil.init_cycle()


Ruinterscovil.create_change_dot(Ruinterscovil.get_null());
Ruinterscovil.set_cord_change_dot(0, 0, -1);
Ruinterscovil.set_size_change_dot(6);
Ruinterscovil.set_upper_object_change_dot(first_object);
Ruinterscovil.commit_change_dot();


Ruinterscovil.create_change_triangle(Ruinterscovil.get_null());
Ruinterscovil.set_cord1_change_triangle(0.5, 1.0, 0.0);
Ruinterscovil.set_cord2_change_triangle(-1.0, 0.0, 0.0);
Ruinterscovil.set_cord3_change_triangle(0.0, 0.0, -1.0);
Ruinterscovil.set_mat_cord_change_triangle(0.0, 0.4, 0.0);
Ruinterscovil.set_color1_change_triangle(0.0, 0.0, -1.0, 1.0);
Ruinterscovil.set_color2_change_triangle(0.0, 1.0, 0.0, 1.0);
Ruinterscovil.set_color3_change_triangle(1.0, 0.0, 0.0, 1.0);
Ruinterscovil.set_upper_object_change_triangle(first_object);
Ruinterscovil.commit_change_triangle();
sleep(4)


