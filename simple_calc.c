 // date Thu, Sep  5, 2024  7:57:45 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int choice,num1,num2; // declaring variables
    printf("Welcome to simple calculator \n Enter \n 1. to add \n 2. to substract two number \n 3. to multiply 2 numbers \n 4. to divide two numbers \n 5. to find remainder ");
    scanf("%d",&choice); // saving the input in choice
    printf("enter two numbers to for the choosen operation");
    scanf("%d %d",&num1,&num2); // sving the number in variables
    switch(choice){ // using switch case to match the the opperation with numbers
    case 1:
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;  
    case 2:
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;  
    case 3:
        printf("%d x %d = %d",num1,num2,num1*num2);
        break;  
    case 4:
        printf("%d / %d = %d",num1,num2,num1/num2);
        break;  
    case 5:
        printf("%d mod %d = %d",num1,num2,num1%num2);
        break;
    default :
        printf("invalid input");  
    };
    return 0;
}