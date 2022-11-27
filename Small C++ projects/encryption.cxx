#include <iostream>
#include <string>
using namespace std;

int main()
{
	char message[100], ch, messageD[100], chD;
	int i, key(3), x;

	cout << "NAME: ADEKANYE ABDULKABIR" << endl;
	cout << "MATRIC NO: 2017/1/66042CS" << endl;
	cout << "PROGRAM: CAESAR CIPHER" << endl;
	cout << "----------------------------------------------------------"
		 << "\npls make sure your input are english alphabet\n";

	cout << "\nPls enter a message to encrypt: ";
	cin.getline(message, 100);
	cout << "key : "

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

	cout << "\nEncrypted message: " << message;
	cout << "\nEncryption Succesful ";
	cout<< "\nDO YOU WANT THE PLAIN TEXT?"<< "IF YES.........press 1";
	cin>> x;

	if (x = 1)
	{
    		for (i = 0; messageD[i] != '\0'; --i)
		{
			chD = messageD[i];

			if (chD >= 'a' && chD <= 'z')
			{
				chD = chD - key;

				if (chD > 'z')
				{
					chD = chD + 'z' - 'a' + 1;
				}

				messageD[i] = chD;
			}
			else if (chD >= 'A' && chD <= 'Z')
			{
				chD = chD - key;

				if (chD > 'Z')
				{
					chD = chD + 'Z' - 'A' + 1;
				}

				messageD[i] = chD;
			}
		}

    	cout << messageD;

    }
    else if (x != 1)
    {
    	cout << "program ended" << "\nTHANK YOU FOR USING MY PROGRAM";

    }



	return 0;
}
