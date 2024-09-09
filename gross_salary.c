 // date Tue, Sep 10, 2024  1:15:35 AM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    float basic, gross, da, hra;
    printf("enter the salary of employee"); // telling user to enter salary
    scanf("%f", &basic); // storing salary in basic
    if(basic <= 10000) // if basic salary is less than 10000 calculating da and hra 
    // according to industry rules
    {
        da  = basic * 0.8; 
        hra = basic * 0.2;
    }
    else if(basic <= 20000) // id salary < 20000
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }
    gross = basic + hra + da;
    printf("gross salary = %.2f", gross); // finally printiong gross salry

    return 0;

}