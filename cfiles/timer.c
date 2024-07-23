#include <stdio.h>    /* timer */
#include <stdlib.h> 
#include <string.h>
#include <time.h>
#include <termios.h>
#include <unistd.h>

int stop();
int counter(void);
int main() {
	
	time_t startTime, stopTime; /* data type used to represnt simple calender time*/
	double elapsedTime;
	int hour = 0, minute = 0, second = 0, flag = 0;


	printf("Press enter to start the stopwatch\n");
	getchar(); /*to read one charectr at a time from the keyboard*/ 

	startTime = time(NULL); /*determines the current calnder time in seconds, NULL has the value zero*/
	

	printf("Stopwatch started. Press Ctrl + c to stop.\n"); 
	
	counter();
	

	stopTime = time(NULL);

	elapsedTime = difftime(stopTime, startTime); /*returns the difference in time, in seconds*/
	printf("\nElapsed time:  %2lf seconds\n", elapsedTime);	
	 		
	return 0;
}


int counter(void) { /*void --> the function takes no arguments */
		int hour = 0, minute = 0, second = 0, flag = 0;
		while(1) {
			if(minute >59) {
				minute = 0; 
				hour++; 
			} 
			if(second > 59){
				second = 0;
				minute++;
			
			} 
		
			printf("\r%02d:%02d:%02d",hour, minute, second);
			fflush(stdout);
			
			sleep(1);
			second++; 
			
		


	
		}

	}
	
