#include<stdio.h>
#include<string.h>
void string(char *x){
    strlen(x);
    int length= strlen(x);
    printf("the length of the string is:\n %d",length);
}
int main(){
    char firstname[100];
    char lastname[100];
    printf("enter the string: ");
    scanf("%s",&firstname);
    string(firstname);
    return 0;
}