 // date Tue, Sep 10, 2024  1:09:19 AM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter the marks of 5 subjects \n");
    for(int i=0;i<5;i++){
        scanf("%d",&num);
        sum+=num;
    };
    printf("your percentage is %d ",(sum*100)/500);
    return 0;
}