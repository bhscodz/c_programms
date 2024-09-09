 // date Sun, Sep  8, 2024 11:03:36 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int n,f1=0,f2=1,temp;
    printf("enter upto how many numbers you want from the series \n");
    scanf("%d",&n);
    printf(" %d %d ",f1,f2);
    for(int i=0;i<n-2;i++){
        temp=f2;
        f2=f1+f2;
        printf("%d ",f2);
        f1=temp;
    };
    return 0;
}