#include <iostream>
#include <string>

using namespace std;
int main()
{
	// my personal information 
	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
	cout << "MATRIC NO: 2017/1/66042CS" << endl;
	// my projet information
	cout << "PROGRAM: CAESAR CIPHER" << endl;
	cout << "----------------------------------------------------------"
		 // caution
		 << "\npls make sure your input are english alphabet\n";
// ask for input from user
	
	string input;
	int count = 0, length;
	
	cout << "\nPls enter a message to encrypt: ";
	
	getline(cin,  input);
	
	cout << "key : "
		 << "key used in caeser cipher is '3'\n";
	
	length = (int)input.length();
	
	for (count = 0; count < length; count++)
	{
		if (isalpha(input[count]))
		{
			input[count] = tolower(input[count]);
			for (int i = 0 ; i < 3; i++)
			{
				if (input[count] == 'z')
					 input[count] = 'a';
				
				else
					input[count] ++ ;
				
			}
		}
	}
	
	cout << "Encryption process has completed sucessfully\n" << "The cipher text output is :" << input << endl;
	
		cout << "program ended" << "\n**THANK YOU FOR USING MY PROGRAM**";
    

	return 0;
}