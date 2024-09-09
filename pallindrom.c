 // date Sun, Sep  8, 2024 11:04:07 PM 
 // created by bhaskar 
#include<stdio.h>
#include<math.h>
int main(){
    int num,size=0,r=0;
    printf("enter the number you want to check if pallindrom \n");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0){
        size+=1;
        temp/=10;
    };
    temp=num;
    for(int i=1;size>=i;i++){
        r+=((temp%10)*pow(10,size-i));
        temp/=10;
        printf("%d \n",r);
    };
    if(r==num){
        printf("%d == %d number is a pallindrom",num,r);
    }
    else{
        printf("%d != %d number is not a pallindrom",num,r);
    }
    return 0;
}