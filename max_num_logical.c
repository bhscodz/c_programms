 // date Sun, Sep  1, 2024 12:40:10 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int a,b,c; // declaring variables
    printf("enter three numbers"); // prompting user to take input
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c){
        printf("%d>%d>%d",a,b,c);
    }
    else if(a>b && c>b && a>c){
        printf("%d>%d>%d",a,b,c);
    }
    else if(a>b && c>a){
        printf("%d >%d> %d",c,a,b);
        
    }
    else if(b>a && c>b ){
        printf("%d >%d> %d",c,b,a);
    } 
    else if(b>a && a>c){
        printf("%d >%d> %d",b,a,c);

    }
    else{
        printf("%d >%d> %d",b,c,a);
    };
}