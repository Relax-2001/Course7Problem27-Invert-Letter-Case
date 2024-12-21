#include <iostream>
#include <cctype>

using namespace std;

char ReadChar()
{
	char UserChar = ' ';
	cout << "Enter a char\n";
	cin >> UserChar;
	return UserChar;
}

char InvertLetterCase(char & UserChar)
{

	return islower(UserChar) ? toupper(UserChar) : tolower(UserChar);

}

int main()
{

	char UserChar = ReadChar();

	cout << "\nInverted char:\n";
	UserChar = InvertLetterCase(UserChar);

	cout << UserChar << "\n";
	

	return 0;
}
