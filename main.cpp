#include <Windows.h>
#include "windows_manager.h"

using namespace std;

int main()
{
    WindowManager windows;
    Window window = windows.make_window(0, 0, 40, 32, 3, 3, "test",
        "Welcome to cmd tables app");

    windows.windows[3] = window;

    windows.make_button(5, 10, "Next", "test", 0, true, 7, 6);
    windows.make_button(5, 15, "Well", "test", 1, false, 7, 6);
    windows.make_button(5, 20, "Fuck", "test", 2, false, 7, 6);
    windows.make_button(5, 25, "Strings", "test", 3, false, 7, 6);

    windows.current_window = &windows.windows[3];

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