#include <iostream>
#include <cmath>

using namespace std;

	int main() 
{
	int age;
	cout << "Enter your age: " << flush;
	cin >> age;

	cout << "You are " << age << " years old" << endl;
	
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	string Name;
	cout << "Enter your name: " << flush;
	getline(cin, Name); 
	cout << "Hello " << Name << endl;
	
	return 0;
}
