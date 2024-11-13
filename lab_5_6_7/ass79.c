#include <stdio.h>
void inter_change(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x,y;
    printf("enter two numbers");
    scanf("%d %d",&x,&y);
    printf("x=%d y=%d \n",x,y);
    inter_change(&x,&y);
    printf("x=%d y=%d \n",x,y);
}