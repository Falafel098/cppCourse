#include <iostream>
#include <string>

using namespace std;

int main ()
{ 
	char grade = 'B';
	string phrase = "Baraa likes ducks";
	phrase [0] = 'Z';
	int age = 23;
	bool isMale = true;

	cout << grade << " stands for Baraa" << endl;
	cout << phrase << endl;
	cout << "he is about " << age << " years old" << endl;
	cout << "he is " << (isMale ? "male" : "female") << endl;
	cout << phrase.find("ducks",0);


 return 0; 
}
