require 'ruinterscovil'
require 'rubyscovil_global'
require 'rubyscovil_camera'
require 'rubyscovil_dot'
require 'rubyscovil_line'
require 'rubyscovil_triangle'
require 'rubyscovil_quad'

#Ruinterscovil.set_options(640,480,32, 1, 0)
#Ruinterscovil.set_caption("Ruby Test (Small Animation)", "Ruby Test")


class Options

	def init(width=640,height=480,bit=32,doublebuffer=1,fullscreen=1,caption="RubyScovil",long_caption="RubyScovil")
	
	Ruinterscovil.set_options(width,height,bit, doublebuffer, fullscreen)
	Ruinterscovil.set_caption(caption, long_caption)	


	end


	
end


class Scene
	def init()
		$first_object = Ruinterscovil.create_scene()
		cyle_thread = Ruinterscovil.init_cycle()


	end

end





