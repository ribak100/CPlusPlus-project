/* my updated assignment 
am very sorry sir for submitting my assignment again, i was not aware at first that the program you asked us to right should have an option that ask the user if he/she wants the plain text(i.e decryption), that was the reason why i have to rewrite my program and resend it to you sir, so that it can meet all the necessary criteria. Thank you very much sir for your understaing, have a nice day sir.*/



#include <iostream>
#include <string>

// caeser cipher c++ program...
using namespace std;
//  using namespace standard


string encrypt (string text, int key) //function to encrypt the text inputted...
{
	string output = "";
	for (int i = 0; i < text.length(); i++){
  	if (isupper(text[i])){    
	output += char(int(text[i]+key-65)%26+65);     //performs the shift if text is UPPER case
	}
	else {					
	output += char(int(text[i]+key-97)%26 + 97);   //performs the shift if text is lower case 
	}
     
	}
	return output; // returns the enctypted text
	}
	
	string decrypt (string text, int key)
{
	string output = "";
	for (int i = 0; (i < text.length()); i++){
		
   	if (isupper(text[i])){   
	output += char(int((((text[i]-key-65)+26)%26)+26)%26+65);    //performs the shift if text is UPPER case
	}
	else {                  
	output += char(int((((text[i]-key-97)+26)%26)+26)%26+97);   //performs the shift if text is lower case
	}
	}	
	return output;         //returns the decrypted text
}
	

int main ()             
{
	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
   cout << "MATRIC NO: 2017/1/66042CS" << endl;
   cout << "PROGRAM: CAESAR CIPHER" << endl;
	int i, key, x;
	string text;
	string output;
	string encrypted;
	string decrypted;
 cout<<"----------------------------------------------------------" << "\npls make sure there is no space between the plain text\n";
   cout << "\nEnter plain text: ";
   cin >> text;
   
   cout << "\n'note'key used in caeser cipher is '3'";
	cout << "\nplease enter your key : ";
	cin >> key;
	encrypted = encrypt(text, key);
	cout << "\nEncryption process has completed sucessfully  " << "\nThe cipher text output is :"<< encrypted ;
   
   do
   {
   	cout << "\nDo you want the Plain text?... \nPlease choose an option\n<<<<<<1 for 'YES'>>>>>>\n<<<<<<2 for 'NO'>>>>>>\n<<<<<<3 to end the program>>>>>>\n";
   	cin >> x;
   	switch (x)
   	{
   		case 1:     //if user inputs 1 , then execute the below code
   			decrypted = decrypt(encrypted, key);
   			cout << "\nDecryption Succesful: " << decrypted << endl;
   			break;
   	
   	
   		case 2 :// if 2 will execute the code below
   							cout << "\if you dont want the plain text, kindly input '3' to end the program " << endl;
   							break;
   						    
   		case 3 : // if 3 will break and end the program
   		cout << "<<<<<<program ended>>>>>>"<<"\n*THANK YOU FOR USING MY PROGRAM*";
   		break;
   		default : cout << "please input '1' or '2'  to continue or input 3 to end the program"<< endl;
   	}// will continue the do/while loop if input is not 1,2 or 3
   }while (x != 3);
   
   
	return 0;
}
   	
   	
   		




