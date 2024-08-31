 // date Sat, Aug 31, 2024  8:01:23 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int da,mn,hr; // declaring variables for day minute and hour respectively
    printf("enter day"); // promting the user to enter day
    scanf("%d",&da); // taking user input and storing in day variable
    printf("enter hour"); // promting the user to enter hour
    scanf("%d",&hr);// taking user input and storing value in hour
    printf("enter minute"); // promting the user to enter minute
    scanf("%d",&mn); // taking user input and storing it in variable
    printf("time in seconds %d",(da*24*60*60)+(hr*60*60)+(mn*60)); // displaying output
    return 0;
}