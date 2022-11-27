// program by: Adekanye Abdulkabir

#include <iostream>
#include "windows.h"

using namespace std;

int main()
{

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(6);

    cout << "****** WELCOME TO MY GAUSS-SEIDEL ITERATION METHOD PROGRAM ******"<<endl;
    cout << " "<<endl;
    cout << " "<<endl;

    double p, q, r, s, t, u, v, w, x;
    double k1, k2, k3;
    double a11, a12, a13, b1, a21, a22, a23, b2, a31, a32, a33, b3;

    int gaussSeidel[3][4];

    cout << "enter the value of all the matrices respectively : "<<endl;
    for(int rows = 0; rows <3; rows++){

        for(int cols = 0; cols < 4; cols++){
            cin >> gaussSeidel[rows][cols];
        }
    }

    a11 = gaussSeidel[0][0];
    a12 = gaussSeidel[0][1];
    a13 = gaussSeidel[0][2];
    b1  = gaussSeidel[0][3];
    a21 = gaussSeidel[1][0];
    a22 = gaussSeidel[1][1];
    a23 = gaussSeidel[1][2];
    b2 = gaussSeidel[1][3];
    a31 = gaussSeidel[2][0];
    a32 = gaussSeidel[2][1];
    a33 = gaussSeidel[2][2];
    b3 = gaussSeidel[2][3];

    k1 = 0;
    k2 = 0;
    k3 = 0;

    cout <<"calculation completed: iteration table below "<<endl;
    cout <<"____________________________________________________________"<<endl;

    for(int i = 0; i <= 7; i++){

       // for the first x1
        p = 1/a11;
        q = b1 - (a12 * k2) - (a13 * k3);
        r = p * q;
        k1 = r;

        // for the second value of x2
        s = 1/a22;
        t = b2 - (a21 * k1) - (a23 * k3);
        u = s * t;
        k2 = u;

        // for the second value x3

        v = 1/a33;
        w = b3 - (a31 * k1) - (a32 * k2);
        x = v * w;
        k3 = x;

        Sleep(500);
        cout << "| " << " iteration : "<< i <<"  |  " << k1 <<"   |   " << k2 << "   |     "<< k3<< " |" << endl;
        cout <<"____________________________________________________________"<<endl;



   }










    return 0;
}
