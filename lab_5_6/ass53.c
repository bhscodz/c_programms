#include<stdio.h>
int main(){
    int row;
    printf("enter the number of rows");
    scanf("%d",&row);
    for(int i=1;i<=(row/2+1);i++){
        for(int k=0;k<(row/2+1)-i;k++){
            printf(" ");
        }
        for(int j=1;j<=(i*2)-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<=(row/2);i++){
        for(int k=1;k<=i;k++){
            printf(" ");
        }
        for(int j=1;j<=((row/2)+1-i)*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}