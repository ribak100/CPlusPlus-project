#include <iostream>
#include <string>

// caeser cipher c++ program...
using namespace std;
//  using namespace standard

string decrypt (string text, int key){
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

string encrypt (string text, int key){ //function to encrypt the text inputted...
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
/*
int main ()
{
	int i, key, x;
	string text;
	string output;
	string encrypted;
	string decrypted;
   cout << "\nEnter plain text: ";
   cin >> text;
   cout << "Key : ";
   cout << "key used in caeser cipher is '3'";
	encrypted = encrypt(text, key);
	cout << "\nEncryption Succesful " <<"\nyour encrypted text is :" << encrypted << endl;
   	cout << "Do you want the Plain text?... input 1 for YES: ";
   	cin >> x;
   	switch (x)
   	{
   		case 1 :     //if user inputs 1 , then execute the below code
   			decrypted = decrypt(encrypted, key);
   			cout << "\nDecryption Succesful: " << decrypted << endl;
   		}
   		return 0;
   	}
*/
