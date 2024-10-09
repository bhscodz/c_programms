#include <stdio.h>
int main(){
printf("enter the amounr of numbers you want to enter");
int num,a,max,max_2;
scanf("%d",&num);
printf("start entering numbers");
int i=0;
do{
    scanf("%d",&a);
    max=i==0?a:max;
    max_2=i==0?a:max_2;
    max_2=max!=a && max>a && a>max_2 || max_2==max?a:max_2;
    if(a>max){
        max_2=max;
        max=a;
    }
    i++;
}
while(i!=num);
printf("%d",max_2);
return 0;
}
