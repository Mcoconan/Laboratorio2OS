#include <stdio.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h>     // for sleep()
 
// main function to find the execution time of a C program
int main()
{
    // to store execution time of code
    double time_spent = 0.0;
 	int i;
 	pid_t process_id;
 	pid_t process_tw;
    clock_t begin = clock();
 
    for(i = 0;i==1000000;++i){
    	
	}
    sleep(3);
 
    clock_t end = clock();
 
    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("Time elpased is %f seconds", time_spent);
 
    return 0;
}
