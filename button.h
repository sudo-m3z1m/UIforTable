#include <Windows.h>

struct Button
{
    HANDLE cmd_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position;
    short select_color = 6;
    int width, height;
    bool selected;
    char text[20];
    void draw();
    void remove();
    void select();
    void press();
};
