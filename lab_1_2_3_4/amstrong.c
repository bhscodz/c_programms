 // date Sun, Sep  9, 2024  9:05:09 AM 
 // created by bhaskar
#include<stdio.h>
int main(){
    int num,sum=0,a;
    printf("enter the number if you want to check armstrong or not");
    scanf("%d",&num);
    int check=num; 
    while(num!=0){
        a=num%10;
        sum+=(a*a);
        num/=10;
    };
    if(check==sum){
        printf("the number is amstrong");
    }
    else{
        printf("the number is not amstrong");
    };
    return 0;
}