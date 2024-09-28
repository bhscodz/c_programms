 // date Fri, Sep  6, 2024 11:25:40 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int num; // declaring a value to store number
    char is_prime='y'; // a state variable to check if prime
    // when a factor is found we will change the character to know if factor was
    // found in the loop
    num=78 ;// taking a number to check if prime
    for(int i=2;i<=num/2;i++){ // we are iterating through 2 to num/2 as 1 is factor of all number 
    //and smallest factor is 2 so there are no numbers after num/2 which can be factor of num 
        if(num%i==0){ // chacking if i is factor of num 
            is_prime='n';
            break;
        }
    };
    if(is_prime=='y'){ // finally printing based on state variable
        printf("%d is prime",num);
    }
    else{
        printf("%d is not prime",num);
    };
    return 0;
}