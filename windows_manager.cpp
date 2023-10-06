#include "windows_manager.h"

void WindowManager::change_window(Window new_window)
{

}

void WindowManager::draw_window()
{

}

void WindowManager::close_window(Window window)
{

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