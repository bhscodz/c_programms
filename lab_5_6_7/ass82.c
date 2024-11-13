#include<stdio.h>
int fact(int z){
    int fact=1;
    for(int i=1;i<=z;i++){
        fact=fact*i;
    }
     return fact;
}
int main(){
    int n,r;
    printf("enter n:");
    scanf("%d",&n);
    printf("enter r:");
    scanf("%d",&r);
    float cmb();
    int combination = cmb(n,r);
    printf("%d",combination);
    return 0;
}
float cmb(int x,int y){
    float cmb=fact(x)/(fact(y)*fact(x-y));
    return cmb;
}