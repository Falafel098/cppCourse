#include <iostream>
using namespace std;

int main()
{ 
	int num1, num2;
	char op;

	cout << "Enter your first number: " << endl;
	cin >> num1;
	cout << "Enter operator: " << endl;
	cin >> op;
	cout << "Enter your second number: " << endl;
	cin >> num2; 

	int result;
	if (op == '+') {
		result = num1 + num2;
	} else
	if (op == '-') {
		result = num1 - num2;
	} else
	if (op == '/') {
		result = num1 / num2;
	} else
	if (op == '*') {
		result = num1 * num2;
	} else {
		cout << "Invalid operator" << endl;
	} 
		cout << result << endl;


	return 0;
}
