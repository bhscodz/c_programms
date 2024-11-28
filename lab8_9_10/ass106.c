#include <stdio.h>
struct item{
    char item_name[100];
    int quantity;
    int price;
};
void fun(struct item *ptr){
    printf("amount = %d",ptr->quantity*ptr->price);
}
int main(){
    struct item t1;
    printf("enter item deatails\n");
    printf("enter item name\n");
    scanf("%s",&t1.item_name);
    printf("enter the price of item\n");
    scanf("%d",&t1.price);
    printf("enter the quantity of item\n");
    scanf("%d",&t1.quantity);
    struct item *p=&t1;
    fun(p);
    return 0;
}