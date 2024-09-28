 // Sat, Aug 31, 2024  7:27:05 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int a,b;// declaring variables
    printf("enter the first variable a(integer only)");
    scanf("%d",&a); //taking first avriable from user
    printf("enter the second variable a(integer only)");
    scanf("%d",&b); // taking second variable
    // we will use bitwise xor operator to swap the variables
    a=a^b; // first we take the bitwise xor of both numbers
    // if use take bitwise (a xor b) and again perform bitwise
    // xor operation with rest and one of the variable we will get the other variable
    b=a^b; // here b ^(a^b) will give the value of a
    a=a^b; // here a^(a^b) will give the value of b
    printf("value of variable a after swaping,%d",a);
    printf("value of variable b after swaping %d",b);
}