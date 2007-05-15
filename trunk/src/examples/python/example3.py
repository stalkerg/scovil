import pyscovil, time

curent_options = pyscovil.options(640, 480, 32, False, True, "PyExample3", "Test")
scene_object = pyscovil.scene()

line1 = pyscovil.line(scene_object, [0,0,-1], [1,0,-1])
triangle1 = pyscovil.triangle(line1, [0, 0.3, -1], [-0.3, 0, -1], [0.3, 0, -1])
triangle1.set_color1([1,0,0,1])
triangle1.set_color2([0,1,0,1])
triangle1.set_color3([0,0,1,1], True)
for i in xrange(90):
	line1.set_direction([0,0,1,i], True)
	time.sleep(0.5)

time.sleep(2)
