 // date Sun, Sep  8, 2024 10:59:15 AM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int num,max1=0,max2=0,n,temp,temp2;
    printf("enter the number of numbers you wnat to check for greatest and second greatest \n");
    scanf("%d",&n);
    printf("start entering %d numbers",n);
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        if(max1<temp){
            max1=temp;
            if(i==0){
                temp2=max1;
            }
            else{
                max2=temp2;
                temp2=max1;
            };
        }
    };
    printf("maximum number %d and second max number %d",max1,max2);
    return 0;
}