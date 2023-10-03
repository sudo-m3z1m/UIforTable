#include <Windows.h>

struct Button
{
    HANDLE cmd_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position;
    short select_color = 6;
    int width, height;
    bool activated;
    char text[20] = "Push it";
    void draw();
    void remove();
    void set_activated(bool is_activated);
    // void select();
    // void deselect();
    void press();
};
