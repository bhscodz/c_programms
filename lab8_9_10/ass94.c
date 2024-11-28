#include <stdio.h>
int main()
{
    printf("entre the string \n");
    char str[100];
    char rev_str[100];
    fgets(str ,100,stdin);
    int a=0;
    while(str[a]!='\0' && str[a]!='\n'){
        a++;
    }
    for(int k=0;k<a;k++){
        *(rev_str+k)=*(str+a-k-1);
    }
    printf("the reversed string is \n");
    for(int k=0;k<a;k++){
        printf("%c",*(rev_str+k));
    }
    return 0;
}