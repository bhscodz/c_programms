 // date Sun, Sep  8, 2024 11:03:53 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int n,max=0,min=0,temp;
    printf("enter the number of numbers you want to check max and min from \n");
    scanf("%d",&n);
    printf("start entering the numbers \n");
    for(int i=0;i<n;i++){
        scanf("%d",&temp);
        i==0?max=min=temp:max;
        max=temp>max?temp:max;
        min=temp<min?temp:min;
    };
    printf("maximum -- > %d minimum -- > %d",max,min);
    return 0;
}