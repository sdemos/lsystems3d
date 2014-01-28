/*********************************
 * Playing around with cool stuff
 * test.cpp
 * author: stphndemos
 * *******************************/

using namespace std;

#include <GLFW/glfw3.h>
#include <thread>

int main (int argc, char **argv)
{
    glfwInit();

    // some settings
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

    // create the window
    GLFWwindow *window - glfwCreateWindow(1280, 800, "OpenGL", glfwGetPrimaryMonitor(), nullptr);

    // set the window
    glfwMakeContextCurrent(window);

    // event loop
    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, GL_TRUE);
        }
    }



    this_thread::sleep_for(chrono::seconds(1));
    glfwTerminate();
}
