#include "window.h"

void Window::draw()
{
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

	draw();
}

void Window::close()
{

}