#include "window.h"

struct WindowManager
{
    // Window all_windows[5];
    Window current_window;
    void change_window(Window new_window);
    void draw_window();
    void close_window(Window window);
    int check_user_input(); //Need to change return type in future
};