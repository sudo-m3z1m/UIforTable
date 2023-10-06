#include <Windows.h>
#include <conio.h>
#include <iostream>

struct Button
{
    HANDLE cmd_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    
    short x, y;
    short select_color = 6;
    short color = 7;
    int width, height;
    bool activated = false;
    char text[20] = "Push it";
    void draw();
    void remove();
    void set_activated(bool is_activated);
    void press();
};
