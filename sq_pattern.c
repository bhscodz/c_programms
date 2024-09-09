 // date Sun, Sep  8, 2024 11:16:32 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    printf("enter the number of character you want in series 1,4,9,16..  \n");
    int n,num=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",num*num);
        num+=1;
    };
    return 0;
}