#include <stdio.h>
#include<string.h>
int main()
{
    printf("enter the string");
    char str[100];
    scanf("%s",&str);
    int len=strlen(str);
    strlwr(str);
    printf("%s\n",str);
    int v=0;
    for(int i=0;i<len;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            v+=1;
        }
    }
    printf("number of vowels:%d\nnumber of consonents:%d",v,len-v);
    return 0;
}