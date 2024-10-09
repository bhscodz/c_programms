#include<stdio.h>
int main(){
    int row;
    printf("enter how many rows of pattern you want to print \n");
    scanf("%d",&row);
    char ch;
    for(int i=1;i<=row;i++){
        ch='A';
        for(int a=1;a<=i;a++){
            printf("%c",ch+i-1);
        }
        printf("\n");
    }
    return 0;
}