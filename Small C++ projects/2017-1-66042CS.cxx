#include <iostream>
#include <string>
using namespace std;

int main()
{
	char message[100], ch, messageD[100], chD;
	int i, key ;
// my personal information
	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
	cout << "MATRIC NO: 2017/1/66042CS" << endl;
// my project information
	cout << "PROGRAM: CAESAR CIPHER" << endl;
	cout << "----------------------------------------------------------"
	//caution
		 << "\npls make sure your input are english alphabet\n";

	cout << "\nPls enter a message to encrypt: ";
// to collect input from user
	cin.getline(message, 100);
	cout << "'note' key used in caeser cipher is '3'"<<  "\nplease enter your key : "   ;
// to input the key
	cin>> key;
// to loop through each letter	
	for (i = 0; message[i] != '\0'; ++i)
	{
		ch = message[i];

		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch + key;

			if (ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}

			message[i] = ch;
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + key;

			if (ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}

			message[i] = ch;
		}
	}

// to print out the encrypted message
	cout << "\nEncryption process has completed sucessfully  " << "\nThe cipher text output is :"<< message << "\nEncryption Succesful ";
    	cout << "\nprogram ended" << "\nTHANK YOU FOR USING MY PROGRAM";
    
    

	

	return 0;
}