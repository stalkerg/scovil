import pyscovil, time

curent_options = pyscovil.options(640, 480, 32, False, True, "PyExample3", "Test")
scene_object = pyscovil.scene()

camera1 = pyscovil.camera()
camera1.look_at([0,0,1], [0,0,-1], [0,1,0])
camera1.set_current(True)

line1 = pyscovil.line(scene_object, [0,0,0], [1,0,0])
triangle1 = pyscovil.triangle(line1, [0, 0.3, 0], [-0.3, 0, 0], [0.3, 0, 0])
triangle1.set_color1([1,0,0,1])
triangle1.set_color2([0,1,0,1])
triangle1.set_color3([0,0,1,1], True)

for i in xrange(90):
	line1.set_direction([1,0,1,i], True)
	time.sleep(0.05)

for i in xrange(90):
	camera1.look_at([0,0,1+i/100.0], [0,0,-1], [0,1,0], True)
	time.sleep(0.05)

time.sleep(2)
