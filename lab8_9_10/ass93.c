#include <stdio.h>
int main()
{
    printf("entre the string");
    char str[100];
    fgets(str ,100,stdin);
    int k=0;
    while(str[k]!='\0' && str[k]!='\n'){
        k++;
    }
    printf("the number of words are :%d",k);
    return 0;
}