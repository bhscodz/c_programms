 // date Thu, Sep  5, 2024  7:28:41 PM 
 // created by bhaskar 
#include<stdio.h>
#include<ctype.h> // including c type heder file to check if a character is lopwer case
int main(){
    char ch;
    printf("enter a charcter to check whether its small case or not");
    scanf("%c",&ch); // takig user input
    if (islower(ch)){ // checking using conditional "statement" not operator
        printf("the character is lower case "); 
    }
    else{
        printf("the character is upper case");
    }
    return 0;
}