#include<stdio.h>
int prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(prime(n))printf("the number is prime");
    else printf("the number is not prime");
    return 0;
}