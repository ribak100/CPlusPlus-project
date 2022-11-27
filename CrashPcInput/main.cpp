#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <winable.h>
#include <stdlib.h>

using namespace std;

int main()
{
            std::cout << "<<Start";
            FreeConsole();

           BlockInput(true);
            Sleep(20000);

            BlockInput(false);

            std::cout << "<<Done";


}

