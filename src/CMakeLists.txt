find_package(PythonLibs REQUIRED)
find_package(Ruby REQUIRED)
find_package(OpenGL REQUIRED)
find_package(SDL REQUIRED)
find_package(SDL_image REQUIRED)
find_package(PNG REQUIRED)

ADD_LIBRARY(scovil SHARED object.h object.cpp object_dot.h object_dot.cpp sceneobject.h sceneobject.cpp)

#ADD_EXECUTABLE(test test.cpp)
#TARGET_LINK_LIBRARIES(test test_lib ${PYTHON_LIBRARIES} ${OPENGL_LIBRARIES} ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY} util ruby)
TARGET_LINK_LIBRARIES(scovil ${OPENGL_LIBRARIES} ${SDL_LIBRARY} ${SDLIMAGE_LIBRARY})
INCLUDE_DIRECTORIES(${PNG_INCLUDE_DIR} ${PYTHON_INCLUDE_PATH} ${RUBY_INCLUDE_PATH} ${OPENGL_INCLUDE_DIR} ${SDL_INCLUDE_DIR})