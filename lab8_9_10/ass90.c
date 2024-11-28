#include <stdio.h>
int main()
{
    char str[100];
    printf("enter the string");
    // caution fgets also adds a newline character
    fgets(str,100,stdin);
    int i=0;
    int without_space=0;
    while(str[i]!='\0' && str[i]!='\n'){
        if(str[i]!=' '){
            without_space++;
        }
        i+=1;
    }
    printf("length of string without space :%d\nlength of string with space: %d",without_space,i);
    return 0;
}