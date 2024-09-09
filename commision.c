 // date Mon, Sep  9, 2024  1:00:17 AM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int sales;
    float commision;
    printf("enter the sales amount \n");
    scanf("%d",&sales);
    if(sales<500){
        commision=sales*5/100;
    }
    else if(2000>=sales && sales>500){
        commision=sales*10/100+35;
    }
    else if(5000>=sales && sales>2000){
        commision=sales*12/100+185;
    }
    else if(sales>5000){
        commision=sales*12.5/100;
    }
    else{
        printf("commision cant be calculated for entered amount");
    }
    printf("commision on sales of Rs %d is Rs %f",sales,commision);
    return 0;
}