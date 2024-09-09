 // date Thu, Sep  5, 2024  8:16:35 PM 
 // created by bhaskar 
 
#include<stdio.h>
int main(){
    int num1,num2; // declaring variables
    char choice;
    printf("Welcome to simple calculator \n Enter \n 1. a to add \n 2. b to substract two number \n 3. c to multiply 2 numbers \n 4. d to divide two numbers \n 5. e to find remainder ");
    scanf("%s",&choice); // saving the input in choice
    printf("enter two numbers to for the choosen operation");
    scanf("%d %d",&num1,&num2); // saving the char in variables
     // using condition to match the the opperation with numbers
    // we have to use single quotes to compare character
    // because in C single quotes delimite character 
    if(choice == 'a'){
        printf("%d + %d = %d",num1,num2,num1+num2);
    } 
    else if(choice=='b'){
        printf("%d - %d = %d",num1,num2,num1-num2);
    }  
    else if(choice=='c'){
        printf("%d x %d = %d",num1,num2,num1*num2);
    }  
    else if(choice=='d'){
        printf("%d / %d = %d",num1,num2,num1/num2);
    }  
    else if(choice=='e'){
        printf("%d mod %d = %d",num1,num2,num1%num2);
    }
    else{
        printf("invalid input");
    };
    return 0;
}