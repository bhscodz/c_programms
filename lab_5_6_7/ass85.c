#include<stdio.h>
char vowel(char n){
     if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U' || n=='a'
     || n=='e' || n=='i' || n=='o' || n=='u'){
        printf("the character you entered is vowel");
    }
    else  printf("the character you entered is consonent");
}
int main(){
    char n;
    printf("enter the character: ");
    scanf("%c",&n);
   char vl= vowel(n);
    return 0;
}