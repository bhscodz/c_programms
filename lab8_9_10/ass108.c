#include <stdio.h>
#include<stdlib.h>
void swap(char*a,char*b){
    char temp=*(a);
    *(a)=*(b);
    *b=temp;
}
int s_len(char *s){
    int i=0;
    while(*(s+i)!='\0'){
        i++;
    }
    return i;
}
void str_cpy(char *str1,char*str2){
    for(int i=0;i<s_len(str1);i++){
        if(*(str2+i)=='\0') break;
        *(str2+i)=*(str1+i);
    }
}
int str_cmp(char *str1,char *str2){
    // returns 0 when not equal else return 1
    if(s_len(str1)!=s_len(str2)) return 0;
    for(int i=0;i<s_len(str1);i++){
        if(*(str1+i)=='\0') break;
        if(*(str2+i)!=*(str1+i)){
            return 0;
        };
    }
    return 1;
}
char *con_cat(char *str1,char *str2){
    int total_size=s_len(str1)+s_len(str2);
    int str1_len=s_len(str1);
    char *ptr=(char*)malloc(total_size*sizeof(char));
    for(int i=0;i<total_size;i++){
        if(i<str1_len) *(ptr+i)=*(str1+i);
        else *(ptr+i)=*(str2+i-str1_len);
    }
    return ptr; 
}
void rev(char *str1){
    int len=s_len(str1);
    for(int i=0;i<len/2;i++){
        swap(str1+i,str1+len-i-1);
    }
}
int main()
{
    while(1){
        printf("enter the operation \n1 for compy string to another \n2 for compare two strings\n3 for concatinating two strings \n4 for reversing the strings\n enter 0 to exit");
        int inp;
        scanf("%d",&inp);
        switch (inp){
            case 0:
            printf("exiting...");
            return 0;
            case 1:
            printf("enter string 1:\n");
            char s1[100],s2[100];
            scanf("%s",s1);
            str_cpy(s1,s2);
            printf("string copied to string2 %s \n",s2);
            break;
            case 2:
            printf("enter string 1:\n");
            char s11[100],s22[100];
            scanf("%s",s11);
            printf("enter string 2\n");
            scanf("%s",s22);
            if(str_cmp(s11,s22)) printf("string are same");
            else printf("string are different \n");
            break;
            case 3:
            printf("enter string 1:\n");
            char s111[100],s222[100];
            scanf("%s",s111);
            printf("enter string 2\n");
            scanf("%s",s222);
            printf("concatinated string :%s\n",con_cat(s111,s222));
            break;
            case 4:
            printf("enter the string\n");
            char s1111[100];
            scanf("%s",s1111);
            rev(s1111);
            printf("reversed string %s\n",s1111);
            break;
            default :
            printf("invalid input");
        }
    }
    
}