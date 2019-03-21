/*
 *	This file is part of OGS Engine
 *	Copyright (C) 2018-2019 BlackPhrase
 *
 *	OGS Engine is free software: you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, either version 3 of the License, or
 *	(at your option) any later version.
 *
 *	OGS Engine is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *	GNU General Public License for more details.
 *
 *	You should have received a copy of the GNU General Public License
 *	along with OGS Engine. If not, see <http://www.gnu.org/licenses/>.
 */

/// @file

#include "quakedef.h"
#include "imguiwrap.h"
#include "imgui.h"
#include "imgui_impl_opengl2.h"
//#include "imgui_impl_sdl.h"

#ifdef _WIN32
#include "imgui_impl_win32.h"
#endif

qboolean ImGui_Init()
{
	// Setup Dear ImGui context
	IMGUI_CHECKVERSION();
	ImGui::CreateContext();
	
	auto io{ImGui::GetIO()};
	//io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;  // Enable Keyboard Controls

	// Setup Dear ImGui style
	ImGui::StyleColorsDark();
	
	// Setup Platform/Renderer bindings
	//ImGui_ImplSDL2_InitForOpenGL(window, gl_context); // TODO
#ifdef _WIN32
	ImGui_ImplWin32_Init(mainwindow);
#endif
	ImGui_ImplOpenGL2_Init();
	return true;
};

void ImGui_Shutdown()
{
	// Cleanup
	ImGui_ImplOpenGL2_Shutdown();
	//ImGui_ImplSDL2_Shutdown();
#ifdef _WIN32
	ImGui_ImplWin32_Shutdown();
#endif
	ImGui::DestroyContext();
};

void ImGui_Frame()
{
	// Start the Dear ImGui frame
	ImGui_ImplOpenGL2_NewFrame();
	//ImGui_ImplSDL2_NewFrame(window);
#ifdef _WIN32
	ImGui_ImplWin32_NewFrame();
#endif
	ImGui::NewFrame();
	
	ImGui::ShowDemoWindow(&show_demo_window);
	
	// Rendering
	ImGui::EndFrame();
	ImGui::Render();
	//glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
	//glClearColor(clear_color.x, clear_color.y, clear_color.z, clear_color.w);
	//glClear(GL_COLOR_BUFFER_BIT);
	//glUseProgram(0); // You may want this if using this code in an OpenGL 3+ context where shaders may be bound
	ImGui_ImplOpenGL2_RenderDrawData(ImGui::GetDrawData());
	//SDL_GL_SwapWindow(window);
};