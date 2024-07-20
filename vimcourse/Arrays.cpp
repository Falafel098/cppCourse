#include <iostream>
#include <cmath> 

using namespace std; 
	
	int main()
{
	int luckyNum[] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30};

	cout << luckyNum[0] << endl;
	cout << luckyNum[6] << endl;

	luckyNum[1]=10;
	cout << luckyNum[1] << endl;

	return 0;
}	
