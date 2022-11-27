//PROGRAM BY: Adekanye Abdulkabir
//Program for solving for the root of the equation in numerical analysis;

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
char Do;
do{

    double a, b, c, d, p1, p2, p3, x1, x2, xAsh, funcX1, funcX2, funcXAsh, t1, s1, u1, t2, s2, u2, tAsh, sAsh, uAsh, f12, f1Ash;
    int n;
    int x;
    cout << "which type of bisection iteration type do you want to solve"<<endl
    <<"type 1 = aX^x+bX^y+cX^z+d"<<endl
    <<"type 2 = aX^y+bX^z+c"<<endl
    <<"type 3 = aX^y+b"<<endl;

    cin >>x;
    switch(x){

    case 2:
    //double a, b, c, p1, p2, x1, x2, xAsh, funcX1, funcX2, funcXAsh, t1, s1, t2, s2, tAsh, sAsh, f12, f1Ash;

    cout << "enter the coefficient of each variable : "<<endl;
    cin >> a>> b>> c;
    cout<< "enter the power of each element" <<endl;
    cin >> p1 >> p2;
    cout << "enter the value of x1 and x2"<<endl;
    cin >> x1>>x2;
    cout << "enter the number of time you want to run the iteration : "<<endl;
    //int n;
    cin >>n;
    for (int i = 1; i <=n; i++){

    t1 = pow(x1, p1);
    s1 = pow(x1, p2);
    funcX1 = (a*t1)+(b*s1)+c;
    t2 = pow(x2, p1);
    s2 = pow(x2, p2);
    funcX2 = (a*t2)+(b*s2)+c;
    f12 = funcX1*funcX2;

    if (f12 < 0 ){
        xAsh = (x1 + x2)/2;
        tAsh = pow(xAsh, p1);
        sAsh = pow(xAsh, p2);
        funcXAsh = (a* tAsh)+(b*sAsh)+c;

        f1Ash = funcX1 * funcXAsh;
        if(f1Ash > 0){
            x1 = xAsh;
        }else{
            x2 = xAsh;
        }
        cout<< " "<<endl;
        cout<< " "<<endl;
        cout << "iteration "<<i<<endl;
        cout <<"f(x1)*f(x2) = "<< f12<<endl;
        cout << "f(x1)*f(X#) = "<<f1Ash<<endl;
        cout << "the value of x1 = "<<x1<<endl
        << "the value of x2 = "<<x2<<endl;

    }

    }
    break;

    case 3:
   // double a, b, p1, x1, x2, xAsh, funcX1, funcX2, funcXAsh, t1,  t2,  tAsh,  f12, f1Ash;

    cout << "enter the coefficient of each variable : "<<endl;
    cin >> a>> b;
    cout<< "enter the power of each element" <<endl;
    cin >> p1;
    cout << "enter the value of x1 and x2"<<endl;
    cin >> x1>>x2;
    cout << "enter the number of time you want to run the iteration : "<<endl;
    //int n;
    cin >>n;
    for (int i = 1; i <=n; i++){

    t1 = pow(x1, p1);
    funcX1 = (a*t1)+b;
    t2 = pow(x2, p1);
    funcX2 = (a*t2)+b;
    f12 = funcX1*funcX2;

    if (f12 < 0 ){

        xAsh = (x1 + x2)/2;
        tAsh = pow(xAsh, p1);
        funcXAsh = (a* tAsh)+b;

        f1Ash = funcX1 * funcXAsh;
        cout << "f(x1*X#) = :"<<f1Ash<<endl;
        if(f1Ash > 0){
            x1 = xAsh;
        }else{
            x2 = xAsh;
        }
        cout<< " "<<endl;
        cout<< " "<<endl;
        cout << "iteration "<<i<<endl;
        cout <<"f(x1)*f(x2) = "<< f12<<endl;
        cout << "f(x1)*f(X#) = "<<f1Ash<<endl;
        cout << "the value of x1 = "<<x1<<endl
        << "the value of x2 = "<<x2<<endl;

    }

    }
    break;


    case 1:

   // double a, b, c, d, p1, p2, p3, x1, x2, xAsh, funcX1, funcX2, funcXAsh, t1, s1, u1, t2, s2, u2, tAsh, sAsh, uAsh, f12, f1Ash;

    cout << "enter the coefficient of each variable : "<<endl;
    cin >> a>> b>> c >>d;
    cout<< "enter the power of each element" <<endl;
    cin >> p1 >> p2>>p3;
    cout << "enter the value of x1 and x2"<<endl;
    cin >> x1>>x2;
    cout << "enter the number of time you want to run the iteration : "<<endl;
    //int n;
    cin >>n;
    for (int i = 1; i <=n; i++){

    t1 = pow(x1, p1);
    s1 = pow(x1, p2);
    u1 = pow(x1, p3);
    funcX1 = (a*t1)+(b*s1)+(c*u1)+d;
    t2 = pow(x2, p1);
    s2 = pow(x2, p2);
    u2 = pow(x2, p3);
    funcX2 = (a*t2)+(b*s2)+(c*u2)+d;
    f12 = funcX1*funcX2;

    if (f12 < 0 ){
        xAsh = (x1 + x2)/2;
        tAsh = pow(xAsh, p1);
        sAsh = pow(xAsh, p2);
        uAsh = pow(xAsh, p3);
        funcXAsh = (a* tAsh)+(b*sAsh)+(c*uAsh)+d;

        f1Ash = funcX1 * funcXAsh;
        if(f1Ash > 0){
            x1 = xAsh;
        }else{
            x2 = xAsh;
        }

        cout<< " "<<endl;
        cout<< " "<<endl;
        cout << "iteration "<<i<<endl;
        cout <<"f(x1)*f(x2) = "<< f12<<endl;
        cout << "f(x1)*f(X#) = "<<f1Ash<<endl;
        cout << "the value of x1 = "<<x1<<endl
        << "the value of x2 = "<<x2<<endl;

    }

    }


    break;

    default :
        cout << "please enter a valid input"<<endl;
        break;

    }


    cout << "do you want to perform another calculation"<<endl
    << "<<<<< if yes: press any key and enter >>>>>"<<endl
    << "<<<<< if no: press 'n' and enter >>>>>"<<endl;
    cin >> Do;
}
while(Do != 'n');

    return 0;
}
