#include <stdio.h>
void fibo(int num){
    int a=0,b=1;
    int c=0;
    if (num==1) {
        printf("%d",a);
        return;}
    else if(num==2){printf("%d %d",a,b);}
    else{
        printf("%d %d ",a,b);
        for(int i=1;i<=num-2;i++){
            c=a+b;
            printf("%d ",c);
            a=b;
            b=c;
        }
    }

}
int main(){
    printf("enter the number of elements you want");
    int a;
    scanf("%d",&a);
    fibo(a);
}
