#pragma once
#include "pch.h"

#define GLFW_INCLUDE_NONE

class GLFWwindow;

class Window final
{
public:
	Window();
	~Window();

private:

	std::uint32_t m_WindowsCount_;
	bool b_GlfwInitialized_;
	GLFWwindow* window;

protected:
	void OnGlfwError(std::int32_t error_code, const char* error_message);
	static void InitializeGlfw();
	static void TerminateGlfw();

};

