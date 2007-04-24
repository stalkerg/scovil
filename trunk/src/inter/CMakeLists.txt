ADD_LIBRARY(interscovil SHARED change_dot.cpp change_dot.h change_line.cpp change_line.h
change_scene.cpp change_scene.h)

TARGET_LINK_LIBRARIES(interscovil scovil ${OPENGL_LIBRARIES} ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY})
INCLUDE_DIRECTORIES(${PNG_INCLUDE_DIR} ${PYTHON_INCLUDE_PATH} ${RUBY_INCLUDE_PATH} ${OPENGL_INCLUDE_DIR} ${SDL_INCLUDE_DIR})

