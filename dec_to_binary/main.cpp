#include <iostream>
#include "StackPtr.h"
#include "windows.h"

using namespace std;

// for converting decimal to binary;
void dec_to_bin();

int main()
{
    dec_to_bin();


    return 0;
}


void dec_to_bin()
{
    cout << "enter the number you want to convert from decimal to binary : ";
    StackPtr<int> myStack;
    int dec, rem, holdValue;
    cin >>dec;
    holdValue = dec;

    while(dec > 0){
        rem = dec % 2;
        myStack.push(rem);
        dec = dec/2;
        //cout << "dec/2 is "<<dec<<endl;
    }
    cout <<holdValue<<" in binary is = ";
    while(! myStack.isEmpty()){
        int x;
        myStack.topAndPop(x);
        Sleep(100);
        cout <<x;
    }


}
