 // date Sun, Sep  1, 2024 11:32:33 AM 
 // created by bhaskar 
#include<stdio.h>
int main(){
	int s1 ,s2,s3,s4,s5;
	printf("enter marks of 5 subjects"); // prompting user to take input
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5); // taking input from user
	int div=(s1+s2+s3+s4+s5)/500.0*100; // calculating the percentage

	if (90<div){ // checking if percentage is greater then 90
		printf("Division A");
	}
	else if (80<div && 90>div){ // checking if div between 80 and 90
		printf("Division B");
	}
	else { // else division c
		printf("Division c");
	};
};

