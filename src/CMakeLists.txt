# CMakeList.txt for the src dir
# author: Stephen Demos (sxd4303)

#set(LIBS )
#set(SOURCE )
set(MAINEXE test)

# This is the include directory
include_directories(${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/libs/glfw/include)
link_directories(${CMAKE_BINARY_DIR}/build)

# general libraries
#foreach(lib ${LIBS})
#    add_library(${lib} ${lib}.cpp)
#endforeach(lib)

# add the source libraries
#foreach(src ${SOURCE})
#    add_library(${src} ${src}.cpp)
#    target_link_libraries(${src} ${LIBS})
#endforeach(src)

# add the main executable
add_executable(${MAINEXE} ${MAINEXE}.cpp)
target_link_libraries(${MAINEXE} glfw ${GLFW_LIBRARIES})
#target_link_libraries(${MAINEXE} ${SOURCE})
#target_link_libraries(${MAINEXE} ${LIBS})

