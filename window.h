#include "button.h"

struct Window
{
    int width, height;
    int x, y;
    HANDLE cmd_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    Button buttons[4];
    int cur_but_index = 0;
    char name[8];
    char window_text[32];
    void draw();
    void change_active_button(short dir = 0);
    void close();
};