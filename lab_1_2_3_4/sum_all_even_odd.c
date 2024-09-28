 // date Fri, Sep  6, 2024 11:15:07 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int odd=0,even=0,num; // declaring variables
    printf("enter the number till which you want to find sum of odd and even number starting from 1");
    scanf(" %d",&num); // taking input from user
    for(int i=1;i<num;i++){ // looping trough all number between 1 and num
        if(i%2==0){ // if number even add it to even
            even+=i;
        }
        else{ // else odd add the number to odd
            odd+=i;
        };
    };
    printf("sum of all even and odd numbers between 1 and %d are \n Even -- %d \n odd -- %d",num,even,odd);
    return 0;
}