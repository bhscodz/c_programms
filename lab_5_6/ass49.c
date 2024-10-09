#include<stdio.h>
int main(){
    int row;
    printf("enter how many rows of pattern you want to print \n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int a=1;a<=i*2-1;a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}