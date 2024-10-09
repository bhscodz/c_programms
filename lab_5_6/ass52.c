#include<stdio.h>
int main(){
    int row,num;
    printf("enter the number of rows you wnat to print");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        num=1;
        int break_point=(i*2-1)/2;
        for(int j=1;j<=row-i;j++){
            printf(" ");
        };
        for(int a=1;a<=i*2-1;a++){
            if(a<=break_point){
                printf("%d",num);
                num++;
            }
            else{
                printf("%d",num);
                num--;
            }
        }
        printf("\n");
    }
    return 0;
}