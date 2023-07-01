#include <iostream>
#include <string>

int main() {
	if (!glfwInit()) {
		std::cerr << "Error initializing GLFW." << std::endl;
		return 0;
	}

	GLFWwindow *wind = glfwCreateWindow(1400, 800, "Window", nullptr, nullptr);
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
