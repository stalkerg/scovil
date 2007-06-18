require 'ruinterscovil'

Ruinterscovil.set_options(640,480,32, 1, 0)
Ruinterscovil.set_caption("Ruby Test (Small Animation)", "Ruby Test")

first_object = Ruinterscovil.create_scene()
cyle_thread = Ruinterscovil.init_cycle()

dot1=Ruinterscovil.create_change_dot(Ruinterscovil.get_null());
Ruinterscovil.set_cord_change_dot(0, 0, -1);
Ruinterscovil.set_size_change_dot(6);
Ruinterscovil.set_upper_object_change_dot(first_object);
Ruinterscovil.commit_change_dot();


sleep(2)

line1=Ruinterscovil.create_change_line(Ruinterscovil.get_null())
Ruinterscovil.set_start_change_line(1, 0, -1)
Ruinterscovil.set_end_change_line(-1, 0, -1)
Ruinterscovil.set_upper_object_change_line(first_object)
Ruinterscovil.commit_change_line()


sleep(1)
Ruinterscovil.create_change_line(line1)
Ruinterscovil.set_upper_object_change_line(dot1)
Ruinterscovil.commit_change_line()


sleep(2)
Ruinterscovil.create_change_dot(dot1)
Ruinterscovil.set_mat_cord_change_dot(0, 0.7, -1);
Ruinterscovil.commit_change_dot();

sleep(1)
