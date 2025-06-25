#include "config.h"

int main() {
    GLFWwindow* window; // windov

    if (!glfwInit()) // check proper init
    {
        std::cout << "GLFW couldn't start" << std::endl;
        return -1;
    }
    
    window = glfwCreateWindow(640, 480, "AndrejRizz", NULL, NULL); // create new window
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) // glad load & check
    {
        glfwTerminate();
        return -1;
    }

    glClearColor(0.25f, 0.5f, 0.75f, 1.0f); // color owo

    while (!glfwWindowShouldClose(window)) // window update loop
    {
        glfwPollEvents();

        glfwSwapBuffers(window); // swap buffers
    }

    glfwTerminate(); // exit
    return 0;
}