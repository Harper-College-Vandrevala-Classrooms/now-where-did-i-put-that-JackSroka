#include <iostream>
#include <cassert>
using namespace std;

string str;
int findchar(char letter);
int findstr(string str);

int main() {
	int choose;
	cout << "Choose 2 to enter a character and 4 to enter a substring: ";
	cin >> choose;
	switch (choose / 2) {
	case 1:
			assert(findchar('T') == 0);
			break;
			assert(findchar('h') == 1);
			break;
			assert(findchar('e') == 2);
			break;
			assert(findchar(' ') == 3);
			break;
			assert(findchar('q') == 4);
			break;
			assert(findchar('u') == 5);
			break;
			assert(findchar('i') == 6);
			break;
			assert(findchar('c') == 7);
			break;
			assert(findchar('k') == 8);
			break;
			assert(findchar('b') == 9);
			break;
			assert(findchar('r') == 10);
			break;
			assert(findchar('o') == 11);
			break;
			assert(findchar('w') == 12);
			break;
			assert(findchar('n') == 13);
			break;
			assert(findchar('f') == 14);
			break;
			assert(findchar('o') == 15);
			break;
			assert(findchar('x') == 16);
			break;
		
		case 2:
			assert(findstr("The") == 0);
			break;
			assert(findstr("quick") == 4);
			break;
			assert(findstr("brown") == 9);
			break;
			assert(findstr("fox") == 14);
			break;
		
	}
}

int findchar(char letter)
{
	string sent = "The quick brown fox";
	cout << "Enter a character: ";
	cin >> letter;
	auto charfinder = sent.find(letter);
	if (charfinder != string::npos) {
		cout << "\nCharacter is found at :" << charfinder << "\n";
	}
	else
	{
		cout << "-1\n";
	}
	return 0;
}

int findstr(string str)
{
	string sent = "The quick brown fox";
	cout << "Enter a string: ";
	cin >> str;
	auto strfinder = sent.find(str);
	if (strfinder != string::npos) {
		cout << "String is found at:" << strfinder << "\n";
	}
	else
	{
		cout << "-1\n";
	}
	return 0;
}
