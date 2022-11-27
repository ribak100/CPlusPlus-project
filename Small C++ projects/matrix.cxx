#include <iostream>
using namespace std;
int main()
{
	int matrix;
	int i = 0 , j =0;
	int matA[3][3];
	for (i = 0 ; i < 3; i += 1){
		for (j = 0; j < 3 ; j++)
		cin >> matA[i][j];
	}
	
	for (int rows= 0; rows<3; rows++){
		for (int cols=0; cols<3; cols++){
			cout << matA[rows][cols] <<"  ";
		}
		cout << endl;
	}
	
	
	
	return 0;
}