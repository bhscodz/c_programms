 // date Sun, Sep  8, 2024 11:08:18 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    printf("enter the number of character you want in series 2,4,6,8...  \n");
    int n,num=2;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",num);
        num+=2;
    };
    return 0;
}