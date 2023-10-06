#include "window.h"

struct WindowManager
{
    Window all_windows[5];
    Window current_window;
    enum Keys
    { KeyLeft = 75,
      KeyUp = 72,
      KeyRight = 77,
      KeyDown = 80,
      Enter = 13,
      Esc = 27 };
    void change_window(Window new_window);
    void draw_window();
    void close_window(Window window);
    int check_user_input(); //Need to change return type in future
};