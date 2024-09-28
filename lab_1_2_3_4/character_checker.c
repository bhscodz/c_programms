 // date Sun, Sep  1, 2024 12:53:02 AM 
 // created by bhaskar 
#include<stdio.h>
#include<ctype.h> // including ctype headre file for finding character type
int main(){
    char c;
    printf("enter the character you want to check");// prompting to user to enter input
    scanf("%s",&c); // taking ascii value of the character entered
    if (isalpha(c)){ // checking wether the number is alphabet
        if(isupper(c)){ // checking wether the character is uppercase
            printf("the charcter is uppercase alphabet");
        }
        else{  // else the character is alphabet and lowercase 
            printf("the given character is lowercase");
        };
    }
    else if(isdigit(c)){ // else the the charcter is digit
        printf("the given character is digit ");
    }
    else{ // if the character is neither alphabet not digit it is special 
        printf("the charcater is a special charcter");
    };
    return 0;
}