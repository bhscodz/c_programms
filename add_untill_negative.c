 // date Mon, Sep  9, 2024 12:27:10 AM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int sum=0,num;
    printf("start entereing numbers to add , enter negative number to stop \n");
    while(1){
        scanf("%d",&num);
        if (num>0){
            sum+=num;
        }
        else{
            break;
        };
    };
    printf("sum of all the numbers entered %d",sum);
    return 0;
}