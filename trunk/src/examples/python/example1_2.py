import pyinterscovil, time

pyinterscovil.set_options(640, 480, 32, True, False);
pyinterscovil.set_caption("Example2", "Test Example 2");
first_object = pyinterscovil.create_scene();
cyle_thread = pyinterscovil.init_cycle();
time.sleep(2)
pyinterscovil.create_change_dot(pyinterscovil.get_null());
pyinterscovil.set_cord_change_dot(0, 0, -1);
pyinterscovil.set_size_change_dot(6);
pyinterscovil.set_upper_object_change_dot(first_object);
pyinterscovil.commit_change_dot();
time.sleep(3)