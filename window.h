#include <Windows.h>
#include "button.h"

struct Window
{
    int width, height;
    COORD position;
    Button button1, button2, button3, button4;
    char window_text[20];
};