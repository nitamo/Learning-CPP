#include <iostream>
#include <string>

int main()
{
	using namespace std;
	
	const int SIZE = 20;
	char car1[SIZE];
	string str1;

	cout << "Enter your name: ";
	cin >> car1;
	cout << "Your name is: " << car1 << endl;
	cout << "Enter your age: ";
	cin >> str1;
	cout << "Your age is: " << stoi(str1) << endl;
}

