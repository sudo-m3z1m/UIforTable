#include <Windows.h>

struct Button
{
    int width, height;
    COORD position;
    char text[20];
    void select();
    void press();
};
