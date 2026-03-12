#include <stdio.h>
#include <GLFW/glfw3.h>

int main(void) {
    if (!glfwInit()) {
        printf("GLFW failed to initialize\n");
        return 1;
    }
    GLFWwindow *window = glfwCreateWindow(800, 600, "Shade", NULL, NULL);

    if (!window) {
        printf("GLFW failed to create window\n");
        glfwTerminate();
        return 1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {

        glClearColor(0.2f, 0.3f, 0.4f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);



        glfwSwapBuffers(window);
        glfwPollEvents();

    }


    glfwTerminate();
    return 0;
}

