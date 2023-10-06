#include "button.h"

struct Window
{
    int width, height;
    COORD position;
    Button buttons[4];
    int cur_but_index = 0;
    char name[8];
    char window_text[32];
    void draw();
    void change_active_button(short dir = 1);
    void close();
};