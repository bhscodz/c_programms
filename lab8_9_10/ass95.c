#include <stdio.h>

struct members{
    int emp_num;
    char emp_name[100];
    int pay;
};
int main(){
    struct members employ[50];
    printf("enter the number of employ details you want\n");
    
    int a;
    scanf("%d",&a);
    printf("enter the details\n");

    for(int k=0;k<a;k++){
        struct members *ptr=&employ[k];
        printf("enter employee name\n");
        scanf("%s",&ptr->emp_name);
        printf("enter employee number\n");
        scanf("%d",&ptr->emp_num);
        printf("enter employee basic pay\n");
        scanf("%d",&ptr->pay);
    }
    for(int k=0;k<a;k++){
        struct members *ptr=&employ[k];
        printf("employee name : %s ,basic pay :%d\n",ptr->emp_name,ptr->pay);
    }
    return 0;
}