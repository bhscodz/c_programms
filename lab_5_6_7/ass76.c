#include <stdio.h>
int even_or_odd(int num){
    if (num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a;
    printf("enter the number you want to check");
    scanf("%d",&a);
    if (even_or_odd(a)==1){
        printf("the entered number is even");
    }
    else{
        printf("the entered number is odd");
    }
    return 0;
}