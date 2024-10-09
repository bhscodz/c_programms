#include <stdio.h>
int main(){
printf("enter the number of rows");
int rows;
scanf("%d",&rows);
for (int i=1;i<=rows;i++){
char ch='A';
for(int j=1;j<=i;j++){
printf("%c",ch+j-1);
};
printf("\n");
};
return 0;
};
