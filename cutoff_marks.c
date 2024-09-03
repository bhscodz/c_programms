 // date Sat, Aug 31, 2024 10:03:53 PM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int M,P,C,E;
    printf("enter marks in mathematics out of 200 ");
    scanf("%d",&M);
    printf("enter marks in physics out of 200 ");
    scanf("%d",&P);
    printf(" enter marks in chemistry out of 200 ");
    scanf("%d",&C);
    printf("markes in entrance examination out of 100 ");
    scanf("%d",&E);
    float CM = M/2 + P/2 + C/2 + E;
    printf("cuttoff marks=%f ",CM);
    return 0;
}