 // date Sun, Sep  8, 2024 11:04:48 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int num,sum=0,temp;
    printf("enter n digit number");
    scanf("%d",&num);
    while(num!=0){
        sum+=num%10;
        num/=10;
    };
    printf("sum of all digits %d",sum);
    return 0;
}