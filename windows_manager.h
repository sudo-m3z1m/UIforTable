#include "window.h"

struct WindowManager
{
    Window windows[5];
    Window* current_window;
    enum Keys
    { KeyLeft = 75,
      KeyUp = 72,
      KeyRight = 77,
      KeyDown = 80,
      Enter = 13,
      Esc = 27 };

    Window make_window(int pos_x = 0, int pos_y = 0,
        int win_width = 10, int win_height = 10, int text_x = 0,
        int text_y = 0, char* name = "win", char* text = "\0");

    Button make_button(int but_x = 0, int but_y = 0, char* but_text = "\0",
        char* win_name = "win", int but_num = 0, bool is_active = true,
        int color = 7, int sel_color = 6);

    void change_window(Window new_window);
    void draw_windows();
    int check_user_input(); //Need to change return type in future
};