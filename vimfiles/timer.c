#include <stdio.h>    /* timer */
#include <stdlib.h> 
#include <string.h>
#include <time.h>

int main() {
	time_t startTime, stopTime; /* data type used to represnt simple calender time*/
	double elapsedTime;
	

	printf("Press enter to start the stop watch\n");
	getchar(); /*to read one charectr at a time from the keyboard*/ 

	startTime = time(NULL); /*determines the current calnder time in seconds, NULL has the value zero*/
	
	printf("Stop watch started. Press enter to stop");
	getchar(); 

	stopTime = time(NULL);

	elapsedTime = difftime(stopTime, startTime); /*returns the difference in time, in seconds*/
	printf("Elapsed time:  %2lf seconds\n", elapsedTime);	
	
	return 0;
} 
