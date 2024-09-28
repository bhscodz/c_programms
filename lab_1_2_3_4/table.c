 // date Fri, Sep  6, 2024 11:03:00 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int num; // decl;aring variable
    printf("enter the number to print the table");
    scanf("%d",&num); // taking input
    for(int i=1;i<=10;i++){ // looping 10 times
        printf("%d x %d = %d \n",num,i,num*i ); //multiplying the num by i to obtain multiples 
    };
    return 0;
}