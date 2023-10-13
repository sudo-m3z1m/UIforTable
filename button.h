#include <Windows.h>
#include <conio.h>
#include <iostream>

struct Button
{
    HANDLE cmd_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    
    short x, y;
    short select_color = 6;
    short color = 7;
    bool activated = false;
    char text[16];
    void set_text(char* _text);
    void draw();
    void remove();
    void set_activated(bool is_activated);
    void press();
};
