// PROGRAM BY : Adekanye Abdulkabir

#include <iostream>
#include "math.h"
#include "myStackAdt.h"

using namespace std;

//void getData(double& )


int main()
{
    myStackAdt<double> Stack;

     cout << "****** WELCOME TO MY QUADRATIC EQUATION SOLVING  PROGRAM ******"<<endl;
    cout << " "<<endl;
    cout << " "<<endl;

    int a, b, c , x1, x2, x, y, z, p, q, r, s, t;

    cout << "enter the value of x, y ,z respectively and press enter after you input each value : "<<endl;

    cin >> a >> b >> c;
    Stack.push(a);
    Stack.push(b);
    Stack.push(c);

    x = b*b;
    y = -b;
    z = 4*a*c;
    r = 2*a;
    s = x - z;
    t = sqrt(s);
    p = (y + t)/r;
    q = (y - t)/r;
    x1 = p;
    x2 = q;

    cout << "the value of x1 = "<<x1<<endl;
    cout << "the value of x2 = "<<x2<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;
    cout <<" "<<endl;


    cout << "                 :) bonus, printing out the values you entered in reverse : "<<endl;
    while(! Stack.isEmpty()){
        double x;
        Stack.topAndPop(x);
        cout << x<<endl;
    }




    return 0;
}
