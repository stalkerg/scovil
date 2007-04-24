
find_package(PythonLibs REQUIRED)
find_package(Ruby REQUIRED)
find_package(OpenGL REQUIRED)
find_package(SDL REQUIRED)
find_package(SDL_image REQUIRED)
find_package(PNG REQUIRED)
find_package(SWIG)

#Pokemon Tets Server
#INCLUDE(FindSWIG)
#INCLUDE(UseSWIG)
#POKEMON))) Test

ADD_LIBRARY(scovil SHARED object.h object.cpp object_dot.h
object_dot.cpp object_scene.h object_scene.cpp mathlib.cpp mathlib.h
init.cpp init.h main_cycle.cpp main_cycle.h object_line.h object_line.cpp
object_triangle.h object_triangle.cpp )



TARGET_LINK_LIBRARIES(scovil ${OPENGL_LIBRARIES} ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY})
INCLUDE_DIRECTORIES(${PNG_INCLUDE_DIR} ${PYTHON_INCLUDE_PATH} ${RUBY_INCLUDE_PATH} ${OPENGL_INCLUDE_DIR} ${SDL_INCLUDE_DIR})

IF(SWIG_FOUND)
	INCLUDE(${SWIG_USE_FILE})
	ADD_SUBDIRECTORY(python)
	ADD_SUBDIRECTORY(ruby)
ENDIF(SWIG_FOUND)
ADD_SUBDIRECTORY(inter)
ADD_SUBDIRECTORY(examples/cpp)