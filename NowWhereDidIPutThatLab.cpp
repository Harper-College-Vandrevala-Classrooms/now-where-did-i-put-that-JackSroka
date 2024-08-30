#include <iostream>
#include <cassert>
using namespace std;

string str;
int findchar(char letter);
int findstr(string str);

int main() {
	assert(findchar('T') == 0);
	assert(findchar('h') == 1); 
	assert(findchar('e') == 2);
	assert(findchar(' ') == 3);
	assert(findchar('q') == 4);
	assert(findchar('u') == 5);
	assert(findchar('i') == 6);
	assert(findchar('c') == 7);
	assert(findchar('k') == 8);
	assert(findchar('b') == 9);
	assert(findchar('r') == 10);
	assert(findchar('o') == 11);
	assert(findchar('w') == 12);
	assert(findchar('n') == 13);
	assert(findchar('f') == 14);
	assert(findchar('o') == 15);
	assert(findchar('x') == 16);
	assert(findstr("The") == 0);
	assert(findstr("quick") == 4);
	assert(findstr("brown") == 9);
	assert(findstr("fox") == 14);
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
