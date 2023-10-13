#include <Windows.h>
#include "windows_manager.h"

using namespace std;

int main()
{
    WindowManager windows;
    Window window = windows.make_window(0, 0, 32, 16, 3, 3, "test",
        "Welcome to cmd tables app");

    windows.windows[0] = window;

    windows.make_button(5, 5, "Next", windows.windows[0].name, 0, true, 7, 6);
    windows.make_button(5, 7, "Well", windows.windows[0].name, 1, false, 7, 6);
    windows.make_button(5, 9, "Fuck", windows.windows[0].name, 2, false, 7, 6);
    windows.make_button(5, 11, "Strings", windows.windows[0].name, 3, false, 7, 6);

    windows.current_window = &windows.windows[0];

    windows.draw_windows();

    while (true)
    {
        int key = windows.check_user_input();
        switch (key)
        {
        case windows.KeyUp:
            windows.current_window->change_active_button(-1);
            windows.draw_windows();
            break;

        case windows.KeyDown:
            windows.current_window->change_active_button(1);
            windows.draw_windows();
            break;

        case windows.Enter:
            windows.current_window = &windows.windows[0];
            windows.draw_windows();
            break;

        default:
            break;
        }
    }
}