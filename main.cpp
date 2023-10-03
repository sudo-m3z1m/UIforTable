#include <iostream>
#include <Windows.h>
#include "windows_manager.h"

using namespace std;

int main()
{
    WindowManager windows;
    while (true)
    {
        cout << windows.check_user_input();
    }
}