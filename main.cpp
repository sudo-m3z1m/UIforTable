#include <iostream>
#include <Windows.h>
#include "windows_manager.h"

using namespace std;

int main()
{
    WindowManager windows;
    Button but;
    COORD but_pos;
    but_pos.X = 0;
    but_pos.Y = 0;
    but.position = but_pos;
    but.draw();
    while (true)
    {
        if(windows.check_user_input() == VK_RETURN)
            but.set_activated(true);
        but.draw();
    }
    
}