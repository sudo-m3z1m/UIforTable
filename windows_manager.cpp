#include "windows_manager.h"

void WindowManager::make_window(COORD pos, Window new_window)
{

}

void WindowManager::change_window(Window new_window)
{

}

void WindowManager::draw_windows()
{

}

void WindowManager::close_window(Window window)
{

}

int WindowManager::input()
{
    if(GetAsyncKeyState(VK_LEFT) & 0x7FFF)
        return VK_LEFT;
    if(GetAsyncKeyState(VK_UP) & 0x7FFF)
        return VK_UP;
    if(GetAsyncKeyState(VK_RIGHT) & 0x7FFF)
        return VK_RIGHT;
    if(GetAsyncKeyState(VK_DOWN) & 0x7FFF)
        return VK_DOWN;
    if(GetAsyncKeyState(VK_RETURN) & 0x7FFF)
        return VK_RETURN;
}