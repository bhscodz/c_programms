#include <stdio.h>
int is_pallindrom(int num){
    int temp=num;
    int pall=0;
    while(temp>0){
        pall=(pall*10)+(temp%10);
        temp/=10;
    }
    if(pall==num){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    printf("enter the number you want to check");
    int a;
    scanf("%d",&a);
    if(is_pallindrom(a)){
        printf("the number is pallindrome");
    }
    else{
        printf("the number is not a pallindrome");
    }
    return 0;
}