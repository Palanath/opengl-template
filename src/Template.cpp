#include <iostream>
#include <string>

#define WINDOW_WIDTH 1400
#define WINDOW_HEIGHT 800
#define WINDOW_TITLE "Window"

int main() {
	if (!glfwInit()) {
		std::cerr << "Error initializing GLFW." << std::endl;
		return 0;
	}

	GLFWwindow *wind = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT,
			WINDOW_TITLE, nullptr, nullptr);
	if (!wind) {
		std::cerr << "Error creating window." << std::endl;
		return 0;
	}

	while (!glfwWindowShouldClose(wind))
		glfwPollEvents();

	glfwDestroyWindow(wind);
	glfwTerminate();

	return 0;
}
