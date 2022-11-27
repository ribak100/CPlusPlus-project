#include <iostream>
 using namespace std;

  int raiseToPower(int base, int exponential){
        int sum = 1;
        cout << base<<"^"<<exponential<<" = ";
        for (int i = 0; i < exponential; i++){
            sum *= base ;
            }


        return sum;
    };

 int main( )
 {

    cout<< raiseToPower(9, 8);



 return 0;
 }


