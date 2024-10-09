//Sun, Sep 29, 2024 12:41:47 AM
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int seed=time(0);
srand(seed);
int min=0;
int max=100;
int rand_num=rand()%(max-min)+min;
printf("guess a number");
int num;
scanf("%d",&num);
num==rand_num?printf("you entered correct number"):printf("alas! this is not the number the number was %d",rand_num);
return 0;
}

