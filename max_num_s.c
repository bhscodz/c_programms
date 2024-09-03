 // date Sun, Sep  1, 2024 12:01:05 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int num1 ,num2, num3;
    printf("enter three number"); // prompting the user to enter theree number
    scanf("%d %d %d",&num1,&num2,&num3); // taking user input
    if(num1>num2){ // checking if number 1> number2
        if(num3>num1){
            // if num1>num2 then checking if num3 > num1
            // if yes then our order is num3 > num1 > num2
            printf("%d >%d >%d",num3 , num1 , num2);
        }
        // if not num3>num1 so num1 is greatest so we only need to compare num2 and num3
        // checking if num3>num2 if yes then our order is num1>num3>num2
        else if (num3>num2){
            printf("%d >%d >%d",num1 , num3 , num2);
        }
        // when not num3>num2 then our order is num1>num2>num3
        else{
            printf("%d >%d >%d",num1,num2,num3);
        };
    }
    else{
        // if num2>num1 then checking if num3>num2 if yes then num3 is greatest and num2>num1
        if(num3>num2){
            printf("%d >%d >%d",num3,num2,num1);
        }
        // if num3 < num2 then num2 is greatest checking for num3 and num1
        // if num3 > num1 then our order is num2 > num3 > num1
        else if(num3>num1){
            printf("%d> %d >%d ",num2,num3,num1);
        }
        // if num1>num3 then our order is num3<num1<num2  
        else{
            printf("%d > %d > %d",num2,num1,num3);
        };
    };
    return 0;
};