require 'rubyscovil'
require 'ruinterscovil'
curent_options = Options.new.init(640,480,32,1,0,"Test","Test")
scene_object = Scene.new.init()
#camera1 = Camera.new.init()
#Ruinterscovil.create_change_camera(nil);
#Ruinterscovil.create_change_camera()
sleep (1)

dot1=Dot.new
#dot1.dot_init()

sleep(1)
dot1.dot_size(50,true)
sleep(1)

dot1.dot_cord([0,-0.7,-1],true)
sleep(1)

dot1.dot_color([0.0, 0.0, 1.0, 1.0],true)
sleep(1)

dot2=Dot.new
#dot2.dot_init()

sleep(1)
dot2.dot_cord([0,0.7,-1],true)
sleep(1)
dot2.dot_color([1.0, 0.0, 0.0, 1.0],true)
sleep(1)
#dot2.dot_upper(dot1, true)
#sleep(1)

#dot2.dot_mat_cord([0, -0.9, -1],true)

#dot1.dot_size(100, true)
#quad1=Quad.new

#quad1.quad_init()
sleep(1)
#tri1.triangle_delete(tri1,true)
#dot2=Dot.new.init(dot1,[0,0,-1],100)

#dot1.delete(dot2, true)

camera1 = Camera.new()
camera1.look_at()
#camera1.set_current(true)


sleep(3)




