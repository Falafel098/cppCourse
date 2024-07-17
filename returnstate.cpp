#include <iostream>
using namespace std;

double cube (double num) {
	double result = num * num * num ;
	return result; 
}

int main() 
{
 	double answer = cube (3.0) ;
		cout << answer << endl;
  	return 0;	
}
