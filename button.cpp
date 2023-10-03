#include "button.h"

void Button::draw()
{
    DWORD drawed_text;
    SetConsoleTextAttribute(cmd_handle, 7);
    if(activated)
    {
        SetConsoleTextAttribute(cmd_handle, select_color);
    }

    for (int litter = 0; litter < 20; litter++)
    {
        COORD litter_pos;
        char cur_lit;
        cur_lit = text[litter];
        litter_pos.X = position.X + litter;
        litter_pos.Y = position.Y;
        FillConsoleOutputCharacter(cmd_handle, cur_lit, 1, litter_pos, &drawed_text);
    }
}

void Button::remove()
{
    COORD pos;
    DWORD drawed_text;
    for(int x = 0; x < 20; x++)
    {
        pos.X = position.X + x;
        pos.Y = position.Y;
        FillConsoleOutputCharacter(cmd_handle, ' ', 1, pos, &drawed_text);
    }
}

void Button::set_activated(bool is_activated)
{
    activated = is_activated;
}

void Button::press()
{
    set_activated(false);
}