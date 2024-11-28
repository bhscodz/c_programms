#include <stdio.h>
#include <string.h>
void swap(char *a,char *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void permutation(char *arr,int size,int place_value,int *count){
    if(place_value==size-1) return;
    char str_cpy[size];
    strcpy(str_cpy,arr);
    for(int k=place_value;k<size;k++){
        swap(str_cpy+k,str_cpy+place_value);
        if(strcmp(arr,str_cpy)){printf("%s\n",str_cpy) ; *(count)+=1;};
        permutation(str_cpy,size,place_value+1,count);
    }
}
int main()
{
    char str[100];
    int count=0;
    printf("enter the string");
    scanf("%s",&str);
    printf("Get ready for permutations\n");
    printf("%s \n",str);
    permutation(str,strlen(str),0,&count);
    printf("total permutations : %d \n",count+1);
    return 0;
}