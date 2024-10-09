#include<stdio.h>
int main(){
    int row;
    printf("enter how many rows of pattern you want to print \n");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        int num=0;
        for(int j=1;j<=row;j++){
            if(i!=j){
                printf("%d",num);
            }
            else{
                printf("%d",num+1);
            }
        }
        printf("\n");
    }
    return 0;
}