#include <iostream>
#include <cmath>

using namespace std;

	void sayHi () {
		cout << "Hello User" << endl;
	}


	void sayHi (string name, int age) {
		cout << "Hello " << name << ", you are " << age << " years old" << endl;
	}

	int main ()
{ 
		sayHi ("Fatima",18);
		sayHi ("Zahraa",9);
		sayHi ("Usra",42);
	return 0; 
}

