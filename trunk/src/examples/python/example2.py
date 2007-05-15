import pyscovil, time, random

curent_options = pyscovil.options(640, 480, 32, False, True, "test", "Test")
scene_object = pyscovil.scene()

dots = []
for i in xrange(1000):
	cords =  [random.uniform(1, 4)-2, random.uniform(1, 4)-2, -1]
	dots.append(pyscovil.dot(scene_object, cords, int(random.uniform(2, 6))))


time.sleep(2)

for i in xrange(1000):
	dots[i].set_cord([dots[i].cord[0]-random.random()+0.5, dots[i].cord[1]-random.random()+0.5, dots[i].cord[2]])

time.sleep(5)

for i in xrange(500):
	scene_object.delete_lower(dots[0], True)
	dots.pop(0)
time.sleep(5)