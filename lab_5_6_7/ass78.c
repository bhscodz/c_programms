#include <stdio.h>
#include<math.h>
int ams(int num){
    int ams_num=0;
    int temp_num=num;
    while(temp_num>0){
        ams_num+=pow(temp_num%10,3);
        temp_num/=10;
    }
    if(ams_num==num){
        return 1;}
    else{
        return 0;
    }
}
int main(){
    printf("enter the number you want to check");
    int a;
    scanf("%d",&a);
    if(ams(a)){
        printf("the number is amstrong");
    }
    else{
        printf("the number is not a amstrong");
    }
    return 0;
}