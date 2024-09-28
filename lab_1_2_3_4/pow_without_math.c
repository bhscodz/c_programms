 // date Fri, Sep  6, 2024  7:01:03 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    printf("enter to number first base than exponent");
    int a,b,num;
    scanf("%d %d",&a,&b); // taking user input
    num=a;
    // looping and multipling number with itself
    for(int i=1;i<b;i++){
        a*=num;
    };
    printf("%d to the power %d is %d",num,b,a); // printing final result
    return 0;
}