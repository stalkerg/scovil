import pyinterscovil, time

pyinterscovil.set_options(640, 480, 32, True, False)
pyinterscovil.set_caption("Python Test1", "Python Test")
first_object = pyinterscovil.create_scene()
cyle_thread = pyinterscovil.init_cycle()

#pyinterscovil.create_change_dot(pyinterscovil.get_null())
#pyinterscovil.set_cord_change_dot(0, 0, -1)
#pyinterscovil.set_size_change_dot(6)
#pyinterscovil.set_upper_object_change_dot(first_object)
#pyinterscovil.commit_change_dot()

pyinterscovil.create_change_dot(pyinterscovil.get_null())
pyinterscovil.set_cord_change_dot(10, 15, 20)
pyinterscovil.set_size_change_dot(6)
pyinterscovil.set_upper_object_change_dot(first_object)

pyinterscovil.create_change_dot(pyinterscovil.get_null())
pyinterscovil.set_cord_change_dot(20, 15, 10)
pyinterscovil.set_size_change_dot(6)
pyinterscovil.set_upper_object_change_dot(first_object)

pyinterscovil.create_change_dot(pyinterscovil.get_null())
pyinterscovil.set_cord_change_dot(9, 7, 30)
pyinterscovil.set_size_change_dot(6)
pyinterscovil.set_upper_object_change_dot(first_object)

pyinterscovil.create_change_dot(pyinterscovil.get_null())
pyinterscovil.set_cord_change_dot(25, 20, 6)
pyinterscovil.set_size_change_dot(6)
pyinterscovil.set_upper_object_change_dot(first_object)

pyinterscovil.create_change_dot(pyinterscovil.get_null())
pyinterscovil.set_cord_change_dot(15, 15, 15)
pyinterscovil.set_size_change_dot(6)
pyinterscovil.set_upper_object_change_dot(first_object)

pyinterscovil.create_change_dot(pyinterscovil.get_null())
pyinterscovil.set_cord_change_dot(30, 7, 10)
pyinterscovil.set_size_change_dot(6)
pyinterscovil.set_upper_object_change_dot(first_object)

pyinterscovil.commit_change_dot()

line1 = pyinterscovil.create_change_line(pyinterscovil.get_null())
pyinterscovil.set_start_change_line(1, 0, -1)
pyinterscovil.set_end_change_line(-1, 0, -1)
pyinterscovil.set_upper_object_change_line(first_object)
pyinterscovil.commit_change_line()

time.sleep(2)
pyinterscovil.create_change_line(line1)
pyinterscovil.set_start_color_change_line(1.0, 0, 0, 1.0)
pyinterscovil.create_change_line(line1)
pyinterscovil.set_end_color_change_line(0.0, 0, 1.0, 1.0)
pyinterscovil.set_mat_cord_change_line(0, 0.5, 0)
pyinterscovil.commit_change_line()

for i in xrange(100):
	pyinterscovil.create_change_line(line1)
	pyinterscovil.set_start_change_line(1, -i/100.0, -1)
	time.sleep(0.1)

time.sleep(3)