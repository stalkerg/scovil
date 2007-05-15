ADD_LIBRARY(interscovil SHARED change_dot.cpp change_dot.h change_line.cpp change_line.h
change_triangle.h change_triangle.cpp change_quads.h change_quads.cpp change_scene.cpp change_scene.h options.cpp options.h)

TARGET_LINK_LIBRARIES(interscovil scovil ${OPENGL_LIBRARIES} ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY})
INCLUDE_DIRECTORIES(${PNG_INCLUDE_DIR} ${PYTHON_INCLUDE_PATH} ${RUBY_INCLUDE_PATH} ${OPENGL_INCLUDE_DIR} ${SDL_INCLUDE_DIR})

