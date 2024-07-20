#include <iostream>
using namespace std;


int main() 
{

bool isMale = true;
bool isTall = true;

	if (isMale && isTall) { 
		cout << "You are a tall male" << endl;
	} else if (isMale && !isTall) { 
	       	cout << "You are a short male "	<< endl;
	} else if (!isMale && isTall) { 
		cout << "You are tall but not male" << endl; 
	} else { 
		cout << "Your are not a tall male" << endl;
	}

	return 0;
}
