#include "pch.h"

#include "window.h"


Window::Window() :
	m_WindowsCount_(0),
	b_GlfwInitialized_(false)

{
	
}

Window::~Window()
{
}

void Window::OnGlfwError(std::int32_t error_code, const char* error_message)
{
	std::cerr << "Error: " << error_message <<std::endl;
}

void Window::InitializeGlfw()
{

}

void Window::TerminateGlfw()
{

}

