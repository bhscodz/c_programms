 // date Sat, Aug 31, 2024  7:57:03 PM 
 // created by bhaskar 
#include<stdio.h>
#include<math.h>
int main(){
    // defining t6he given constant
    int TIME=31558150;
    float minutes=TIME/60,hours=minutes/60,days=hours/24;
    printf("number of days %f \n",days);
    printf("number of hours %f \n",hours);
    printf("number of minutes %f \n",minutes);
    return 0;
}