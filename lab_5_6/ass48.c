#include<stdio.h>
int main(){
    int row=5;
    for(int i=1;i<=row;i++){
        for(int a=1;a<=row-i;a++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}