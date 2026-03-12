#include <stdio.h>
#include <GLFW/glfw3.h>

int main(void) {
    if (!glfwInit()) {
        printf("GLFW failed to initialize\n");
        return 1;
    }
    GLFWwindow *window = glfwCreateWindow(800, 600, "Shade", NULL, NULL);

    glfwTerminate();
    return 0;
}

