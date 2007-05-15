require 'ruinterscovil'

Ruinterscovil.set_options(640,480,32, 1, 0)
Ruinterscovil.set_caption("Ruby Test (Small Animation)", "Ruby Test")

first_object = Ruinterscovil.create_scene()
cyle_thread = Ruinterscovil.init_cycle()

sleep(1)

Ruinterscovil.create_change_dot(Ruinterscovil.get_null());
Ruinterscovil.set_cord_change_dot(0, 0, -1);
Ruinterscovil.set_size_change_dot(6);
Ruinterscovil.set_upper_object_change_dot(first_object);
Ruinterscovil.commit_change_dot();

sleep(1)

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

sleep(1)

line1=Ruinterscovil.create_change_line(Ruinterscovil.get_null())
Ruinterscovil.set_start_change_line(1, 0, -1)
Ruinterscovil.set_end_change_line(-1, 0, -1)
Ruinterscovil.set_upper_object_change_line(first_object)
Ruinterscovil.commit_change_line()
sleep(1)
e=-1
s=1
	while (1)
	if(s>(-0.1) && e<0.1)
	Ruinterscovil.create_change_line(line1)
	Ruinterscovil.set_start_change_line(s, 0, -1)
	Ruinterscovil.set_end_change_line(e, 0, -1)
	e=e+0.1
	s=s-0.1
	sleep(1)
	else 
	break
	end
	
	end

sleep(2)


