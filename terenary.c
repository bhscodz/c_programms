 // date Thu, Sep  5, 2024  7:13:38 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int a,b,c;// declaring variable
    printf("enter three numbers"); // promting user to enter input
    scanf("%d %d %d",&a,&b,&c); // taking input from user and storing them inside variable
    // using terenary operator to find order of numbers in descending order
    a>b?((a>c)?((b>c)?printf("%d >%d> %d",a,b,c):printf("%d >%d> %d",a,c,b)):printf("%d> %d> %d",c,a,b)):
    ((b>c)?((a>c)?printf("%d >%d> %d",b,a,c):printf("%d >%d> %d",b,c,a)):printf("%d> %d> %d",c,b,a));
    return 0;
}
