 // date Sat, Aug 31, 2024 11:24:05 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int sec; // declaring variable for seconds
    printf("enter the seconds");
    scanf("%d",&sec); // taking input in seconds
    int seconds=sec%60; // calculating seconds
    int minutes=sec/60; // calculationg minutes
    int hours=minutes/60; // calculating hours
    minutes+=hours%60; // adding remaining minutes
    printf("time is %d hour:%d minutes:%d seconds",hours,minutes,seconds); // diaplaying time
    return 0;
}