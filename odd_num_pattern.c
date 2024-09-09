 // date Sun, Sep  8, 2024 11:03:16 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    printf("enter the number of character you want in series 1,3,5,7...  \n");
    int n,num=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",num);
        num+=2;
    };
    return 0;
}