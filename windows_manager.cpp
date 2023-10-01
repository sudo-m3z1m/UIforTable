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
    short key;
    while(true)
    {
        key = GetAsyncKeyState(key);
        return key;
    }
}