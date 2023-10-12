#include "window.h"

void Window::draw()
{
	DWORD drawed_characters;
	for (int w = x; w <= width; w++)
	{
		for (int h = y; h <= height; h++)
		{
			COORD pos = { w, h };
			char symbol = ' ';

			if ((h == y) || (h == height)) //using ASCII CP437
				symbol = char(196);

			else if ((w == x) || (w == width))
				symbol = char(179);

			if ((w == x) && (h == y))
				symbol = char(218);

			else if ((w == width) && (h == y))
				symbol = char(191);

			else if ((w == x) && (h == height))
				symbol = char(192);

			else if ((w == width) && (h == height))
				symbol = char(217);

			FillConsoleOutputCharacter(cmd_handle, symbol, 1, pos, &drawed_characters);
		}
	}

	int lit_i = 0;

	while (window_text[lit_i] != '\0')
	{
		COORD pos = { t_x + lit_i, t_y };
		FillConsoleOutputCharacter(cmd_handle, window_text[lit_i], 1, pos, &drawed_characters);
		lit_i++;
	}

	for (int but = 0; but < 4; but++)
	{
		buttons[but].draw();
	}
}

void Window::change_active_button(short dir)
{
	int size = 4;
	int next_but_index;
	next_but_index = cur_but_index + dir;

	next_but_index = max(0, min(next_but_index, size - 1));

	buttons[cur_but_index].set_activated(false);
	buttons[next_but_index].set_activated(true);

	cur_but_index = next_but_index;
}

void Window::close()
{

}