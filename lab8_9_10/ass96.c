#include <stdio.h>
#include <string.h>
void swap(char *a,char*b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    printf("enter the string");
    char str[100];
    scanf("%s",str);
    char *a=str;
    int length=strlen(str);
    for(int k=0;k<length;k++){
        for(int j=k+1;j<length;j++){
            if(*(a+k)>*(a+j))swap(a+k,a+j);
            }
        }
    printf("sorted string is %s",str);
    return 0;
}