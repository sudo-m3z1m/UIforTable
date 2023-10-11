#include "windows_manager.h"

void WindowManager::change_window(Window new_window)
{

}

void WindowManager::draw_windows()
{
    for (int i = 0; i < 5; i++)
    {
        windows[i].draw();
        if (current_window == &windows[i])
            return;
    }
}

int WindowManager::check_user_input()
{
    short key;
    key = getch();
    if (key == 224)
    {
        switch (getch())
        {
        case KeyLeft:
            return KeyLeft;
        case KeyUp:
            return KeyUp;
        case KeyRight:
            return KeyRight;
        case KeyDown:
            return KeyDown;
        case Enter:
            return Enter;
        case Esc:
            return Esc;

        default:
            break;
        }
    }

    return key;
}