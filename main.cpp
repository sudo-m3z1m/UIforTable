#include <Windows.h>
#include "windows_manager.h"

using namespace std;

int main()
{
    WindowManager windows;
    Window* window;

    windows.windows[0].x = 0; windows.windows[0].y = 0;
    windows.windows[0].width = 32; windows.windows[0].height = 16;
    windows.windows[0].t_x = 4; windows.windows[0].t_y = 1;

    windows.windows[1].x = 5; windows.windows[1].y = 8;
    windows.windows[1].width = 24; windows.windows[1].height = 12;

    window = &windows.windows[0];

    for (int i = 0; i < 4; i++)
    {
        window->buttons[i].y = i+i + 4;
        window->buttons[i].x = 5;
    }

    window->buttons[0].set_text("Show the table");
    window->buttons[1].set_text("Add new cell");
    window->buttons[2].set_text("Settings");
    window->buttons[3].set_text("Exit");

    windows.current_window = &windows.windows[1];

    windows.draw_windows();

    while (true)
    {
        int key = windows.check_user_input();
        switch (key)
        {
        case windows.KeyUp:
            windows.current_window->change_active_button(-1);
            windows.draw_windows();
            break;

        case windows.KeyDown:
            windows.current_window->change_active_button(1);
            windows.draw_windows();
            break;

        case windows.Enter:
            windows.current_window = &windows.windows[0];
            windows.draw_windows();
            break;

        default:
            break;
        }
    }
}