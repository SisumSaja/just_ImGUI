#include "pch.h"

int main(int args, char** argv)
{
	constexpr std::int32_t k_SuccessCode = 0;
	constexpr std::int32_t k_ErrorCode = 1;

	glfwSetErrorCallback(OnGlfwError);

	bool glfwInitialized = static_cast<bool>(glfwInit());

	//Because window size cant be negatif use uint16_t
	constexpr std::uint16_t k_InitialHeight = 600;
	constexpr std::uint16_t k_InitialWidth = 800;

	GLFWwindow* window = glfwCreateWindow(k_InitialWidth, 
		k_InitialHeight, 
		"GLFW window test", 
		nullptr, /* Handle to which monitor to appear */
		nullptr /* Share window */);

	//check if window creation success
	if (!window)  //maybe better using window == nullptr? idk? sorry
	{
		glfwTerminate();
		return k_ErrorCode;
	}

	// Keep window alive until window is close
	while (!glfwWindowShouldClose(window)) //basically reserve the logic because its return true 
	{
		// Handle window events
		glfwPollEvents();
	}

	//Clean
	glfwDestroyWindow(window);
	glfwTerminate();

	return k_SuccessCode;

}
