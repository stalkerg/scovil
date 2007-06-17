import pyscovil, time

curent_options = pyscovil.options(640, 480, 32, False, True, "PyExample3", "Test")
#curent_options.fps_limit(30)
scene_object = pyscovil.scene()

camera1 = pyscovil.camera()
camera1.look_at([-1,0.5,2], [0,0,-1], [0,1,0])
camera1.set_current(True)

dot1 = pyscovil.dot(scene_object)



quad1 = pyscovil.quad(dot1)
quad1.set_mat_cord([0,0, 0])
quad1.set_direction([0, 1, 0, 90], True)
quad2 = pyscovil.quad(dot1)
quad2.set_mat_cord([1,0, 0])
quad2.set_direction([0, 1, 0, 90], True)

quad3 = pyscovil.quad(dot1)
quad3.set_mat_cord([0,0, -1])
quad3.set_direction([1, 0, 0, 90], True)
quad4 = pyscovil.quad(dot1)
quad4.set_mat_cord([0,1, -1])
quad4.set_direction([1, 0, 0, 90], True)

quad5 = pyscovil.quad(dot1)
quad5.set_mat_cord([0,0, -1], True)

quad6 = pyscovil.quad(dot1)
quad6.set_mat_cord([0,0, 0], True)


line1 = pyscovil.line(scene_object, [0, 0, 0], [0, 0, -3], 5)
line1.set_start_color([1,0,0,1])
line1.set_end_color([1,0,0,1], True)

tex1 = pyscovil.texture("./example4_1.png")
tex2 = pyscovil.texture("./example4_2.png")
tex3 = pyscovil.texture("./example4_3.png")
tex4 = pyscovil.texture("./example4_4.png")
tex5 = pyscovil.texture("./example4_5.png")
tex6 = pyscovil.texture("./example4_6.png")
quad1.set_texture(tex1, True)
quad2.set_texture(tex2, True)
quad3.set_texture(tex3, True)
quad4.set_texture(tex4, True)
quad5.set_texture(tex5, True)
quad6.set_texture(tex6, True)


for i in xrange(1000):
	dot1.set_direction([1,1,0,i], True)
	time.sleep(0.01)

time.sleep(2)
