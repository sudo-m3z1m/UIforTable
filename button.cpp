#include "button.h"

void Button::draw()
{
    COORD position;
    DWORD drawed_text;

    position.X = x;
    position.Y = y;

    if(activated)
        SetConsoleTextAttribute(cmd_handle, select_color);
    else
        SetConsoleTextAttribute(cmd_handle, color);

    SetConsoleCursorPosition(cmd_handle, position);
    std::cout << text;
}

void Button::set_text(char* _text)
{
    strcpy(text, _text);
}

void Button::remove()
{

}

void Button::set_activated(bool is_activated)
{
    activated = is_activated;
}

void Button::press()
{
    set_activated(false);
}