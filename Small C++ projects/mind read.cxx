#include <iostream>
using namespace std;
int main()
{
	int num , sub , div, add, divn, subn, addn, x;
	
	int numX, addX, subX , divX, subnX , addnX, subnnX;
	
	int numY, subY, subnY, subnnY, addY, divY, addnY;
	
	int numu, val, subu, valu, divu, valnu, subnu, valnnu, divnu, valnnnu, addu, followList;
	
	cout <<"☆☆☆☆☆☆☆☆ Welcome to the mind reading program ☆☆☆☆☆☆☆☆";
	cout<<"\n-----------------------------------------------------------";	
	
	do{
	
		cout << "\nInput any of the following keys to continue\nInput 1 for the first mind reading program\nInput 2 for the second mind readind program\nInput 3 for the third mind reading program\nInput 4 for the special mind reading program\nInput 5 to end the program\n";
		cin >> x;	
		switch (x){
	
		case 1:
	
	/* we add 5, them multiply by 2, then substract 7, and multiply by 2, then add 3 and substract 4*/
		cout << "for this case : we add 5, them multiply by 2, then substract 7, and multiply by 2, then add 3 and substract 4";
		cout<< "\nplease input the result of the calculation :"; 
		cin>> num;
		sub = num  - 5 ;
		div = sub / 2 ;
		add = div + 7 ;;
		divn = add / 2 ;
		subn = divn - 3;
		addn = subn + 4;
		cout << subn <<" is the taken number\n" ;
		break;
	
		case 2:
	
	/*  we substract 7, them add 12, multiply by 2, add 3, substract 7, and add 4*/
	
		cout << "for this case : we substract 7, them add 12, multiply by 2, add 3, substract 7, and add 4";
		cout<< "\nplease input the result of the calculation :"; 
		cin >> numX;
		addX = numX + 7;
		subX = addX - 12;
		divX = subX / 2;
		subnX = divX - 3;
		addnX = subnX + 7;
		subnnX = addnX - 4;
		cout << subnnX <<" is the taken number\n" ;
		break;
	
		case 3:
	/* we add 6 , add 2, add 5, substract 7, multiply by 2, and substract 6*/
	
		cout << "for this case : we add 6 , add 2, add 5, substract 7, multiply by 2, and substract 6";
		cout<< "\nplease input the result of the calculation :"; 
		cin >> numY;
		subY = numY - 6;
		subnY = subY - 2;
		subnnY = subnY -5;
		addY = subnnY + 7;
		divY = addY / 2;
		addnY = divY + 6;
		cout << addnY <<" is the taken number\n" ;
		break;
	
		case 4:
	/* for and undefined case, we add addu, we multiply by divu, we add addnu, we multiply by divu, we substract subnu*/
		cout << "add to x\nmultiply with x\nadd to x\nmultiply with x\nsubstract x";
		cout<< "\nplease input the result of the calculation :"; 
		cin >> followList;
		cin >> numu;
		cin >> val;
		subu = numu - val;
		cin >> valu;
		divu = subu / valu;
		cin >> valnu;
		subnu = divu - valnu;
		cin >> valnnu;
		divnu = subnu / valnnu;
		cin >> valnnnu;
		addu = divnu + valnnu;
		cout << addu <<" is the taken number\n" ;
		break;
		
		case 5:
		cout << "<<<<<<The program has completed successfully>>>>>>\n**THANK YOU FOR USING MY PROGRAM**";
	
		default :
		break;
	}
	}while (x != 5);


	return 0;
}