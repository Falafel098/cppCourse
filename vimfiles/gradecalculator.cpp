#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	int grade;
	
	cout << "Enter your score :" << endl;
	cin >> grade;

       	if (grade >= 89 && grade <= 100){ 
		cout << "You got A" << endl; 	
	} else if (grade >= 77 && grade <= 88){ 
		cout << "You got B" << endl; 	
	} else if (grade >= 65 && grade <= 76){ 
		cout << "You got C" << endl; 	
	} else if (grade >= 53  && grade <= 64){ 
		cout << "You got D" << endl; 	
	} else if (grade >= 41 && grade <= 52){ 
		cout << "You got E" << endl; 	
	} else if (grade >= 0 && grade <= 40){ 
		cout << "You got F" << endl; 	
	} else {
		cout << "your score can only be from 0-100, ";
	       	cout << "Try again ..." << endl;	
		
	} 

	return 0;
} 
		

