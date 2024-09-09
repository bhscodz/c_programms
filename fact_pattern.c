 // date Mon, Sep  9, 2024 12:19:45 AM 
 // created by bhaskar 
#include<stdio.h>
int fact(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f*=i;
    };
    return f;
};
int main(){
    printf("enter the number you want to add 1/1!+2/2!+3/3!...  \n");
    int n;
    float f1=0;
    scanf("%d",&n);
    for(float i=1.0;i<=n;i++){
        f1+=i/fact(i);
    };
    printf("sum  of series is %f",f1);
    return 0;
}