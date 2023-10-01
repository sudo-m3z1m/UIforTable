#include "window.h"

struct WindowManager
{
    Window current_window;
    enum Keys {KeyLeft = 37, KeyUp, KeyRight, KeyDown};
    void make_window(COORD pos, Window new_window);
    void change_window(Window new_window);
    void draw_windows();
    void close_window(Window window);
    int input(); //Need to change return type in future
};