#include "pch.h"
#include "MapTimerPlugin.h"

/*
// Do ImGui rendering here
void MapTimerPlugin::Render()
{
	if (!ImGui::Begin(menuTitle_.c_str(), &isWindowOpen_, ImGuiWindowFlags_None))
	{
		// Early out if the window is collapsed, as an optimization.
		ImGui::End();
		return;
	}

	ImGui::End();

	if (!isWindowOpen_)
	{
		cvarManager->executeCommand("togglemenu " + GetMenuName());
	}
}

// Name of the menu that is used to toggle the window.
std::string MapTimerPlugin::GetMenuName()
{
	return "MapTimerPlugin";
}

// Title to give the menu
std::string MapTimerPlugin::GetMenuTitle()
{
	return menuTitle_;
}

// Don't call this yourself, BM will call this function with a pointer to the current ImGui context
void MapTimerPlugin::SetImGuiContext(uintptr_t ctx)
{
	ImGui::SetCurrentContext(reinterpret_cast<ImGuiContext*>(ctx));
}

// Should events such as mouse clicks/key inputs be blocked so they won't reach the game
bool MapTimerPlugin::ShouldBlockInput()
{
	return ImGui::GetIO().WantCaptureMouse || ImGui::GetIO().WantCaptureKeyboard;
}

// Return true if window should be interactive
bool MapTimerPlugin::IsActiveOverlay()
{
	return true;
}

// Called when window is opened
void MapTimerPlugin::OnOpen()
{
	isWindowOpen_ = true;
}

// Called when window is closed
void MapTimerPlugin::OnClose()
{
	isWindowOpen_ = false;
}
*/
