//created by bhaskar sahu
//date-Fri, Aug 23, 2024 12:12:45 AM
#include <stdio.h>// including header file for basic i/o operations
// main function
int main(){
    // defining variables
    int p,r,t;// integer data type

    // printing instruction to user
    printf("enter pricipal amount");
    scanf("%d",&p);// taking input

    //repeating same steps for rate and time(r,t)
    printf("enter the time duration ");
    scanf("%d",&t);

    printf("enter the rate of interest");
    scanf("%d",&r);

    float interest=(p*r*t)/100;//calculating interest and saving it in interest variable
    
    printf("your interest is %f",interest);//finally displaying the result
    return 0;
}
