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

Window WindowManager::make_window(int pos_x, int pos_y,
    int win_width, int win_height, int text_x,
    int text_y, char* name, char* text)
{
    Window new_win;
    new_win.x = pos_x; new_win.y = pos_y;
    new_win.width = win_width; new_win.height = win_height;
    new_win.t_x = text_x; new_win.t_y = text_y;
    new_win.set_name(name); new_win.set_text(text);

    return new_win;
}

Button WindowManager::make_button(int but_x, int but_y, char* but_text,
    char* win_name, int but_num, bool is_active, int color, int sel_color)
{
    Button new_but;
    new_but.x = but_x; new_but.y = but_y;
    new_but.activated = is_active;
    new_but.color = color; new_but.select_color = sel_color;
    new_but.set_text(but_text);

    for (int win = 0; win < 5; win++)
    {
        for (int i = 0; i < 8; i++)
        {
            if(windows[win].name[i] != win_name[i]) //It's working very bad, need to remade this
            {
                break;
            }
            windows[win].buttons[but_num] = new_but;
            return new_but;
        }
    }
    return new_but;
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