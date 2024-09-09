#include<stdio.h>
int add_digit(int num){
    int sum=0;
    while(num!=0){
        sum+=num%10;
        num/=10;
    };
    return sum;
};
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    while(1){
        if(num>=10){
            num=add_digit(num);
        }
        else{
            break;
        };
    };
    printf("single digit after adding digit %d",num);
    return 0;
};