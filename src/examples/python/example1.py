import pyscovil, time
pyscovil.set_options(640, 480, 32, True, False)
pyscovil.set_caption("PyTest", "Python Test")

scene_object = pyscovil.object_scene()

pyscovil.set_head_object(scene_object)

cycle = pyscovil.init_cycle()

dot1_change = pyscovil.object_change_dot()
dot1 = dot1_change.body_object_dot
dot1_change.set_size(16)
dot1_change.set_color(pyscovil.vec4(1.0, 0, 0, 1.0));
dot1_change.set_cord(pyscovil.vec3(0, 0, -0.1));
dot1_change.set_upper_object(scene_object)
pyscovil.add_change(dot1_change)

time.sleep(1)

dot1_change = pyscovil.object_change_dot(dot1)
dot1_change.set_size(15)
dot1_change.set_color(pyscovil.vec4(1.0, 1.0, 0, 1.0));
dot1_change.set_cord(pyscovil.vec3(0, 0, -0.1));
pyscovil.add_change(dot1_change)

time.sleep(2)

#pyscovil.SDL_WaitThread(cycle, pyscovil.get_null())
