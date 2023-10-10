#include <Windows.h>
#include "windows_manager.h"

using namespace std;

int main()
{
    WindowManager windows;
    Window window;
    window.x = 0; window.y = 0;
    window.width = 32; window.height = 16;
    window.text_pos = { 2, 2 };

    /*Window sec;
    sec.x = 4; sec.y = 4;
    sec.width = 4; sec.height = 4;*/

    for (int i = 0; i < 4; i++)
    {
        window.buttons[i].y = i+i + 4;
        window.buttons[i].x = 5;
        window.buttons[i].set_text("Wow");
    }

    window.buttons[0].set_text("Show the table");
    window.buttons[1].set_text("Add new cell");
    window.buttons[2].set_text("Settings");
    window.buttons[3].set_text("Exit");

    window.draw();
    //sec.draw();
    while (true)
    {
        int key = windows.check_user_input();
        switch (key)
        {
        case windows.KeyUp:
            window.change_active_button(-1);
            break;

        case windows.KeyDown:
            window.change_active_button(1);
            break;

        default:
            break;
        }
    }
}