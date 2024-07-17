#include <iostream>
#include <cmath>

using namespace std;
	int main()
	{
	       	string Adjective, PluralNoun, Fruit;

		cout << "Enter an adjective: " << flush;
		getline(cin, Adjective);
       		
		cout << "Enter a plural noun: " << flush;
		getline(cin, PluralNoun);
		
		cout << "Enter a friut: " << flush;
		getline(cin, Fruit); 

		cout << "Cats are " << Adjective << endl;
	       	cout << PluralNoun << " are pretty" << endl;
		cout << "I love " << Fruit << endl;

	return 0;
	}	

