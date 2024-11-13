#include<stdio.h>
struct book{
    char name[100];
    char author[100];
    int price;
};
int main(){
    struct book b1;
    printf("enter details of the book \n");
    printf("enter the name of the book : \n");
    fgets(b1.name,100,stdin);
    printf("enter the name of the author : \n");
    fgets(b1.author,100,stdin);
    printf("enter the price of the book : \n");
    scanf("%d",&b1.price);
    printf("details of the book \n name:%s \n author %s \n price :%d",b1.name,b1.author,b1.price);
    return 0;
}