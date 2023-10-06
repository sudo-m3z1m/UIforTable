#include <Windows.h>
#include "windows_manager.h"

using namespace std;

int main()
{
    WindowManager windows;
    Button but;
    Button but2;
    but.x = 2;
    but.y = 1;
    but.draw();
    while (true)
    {
        int key = windows.check_user_input();
        switch(key)
        {
        case windows.Enter:
        case windows.KeyLeft:
        case windows.KeyUp:
        case windows.KeyRight:
        case windows.KeyDown:
            but.set_activated(!but.activated);
            but.draw();
            break;
        case windows.Esc:
            but.set_activated(false);
            but.draw();
            break;
        default:
            break;
        }
    }
    return 1;
}