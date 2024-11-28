#include <stdio.h>
int main()
{
    // taking input
    printf("entre the number");
    int a ,*ptr=&a;
    scanf("%d",&a);
    printf("square:%d \ncube:%d",*(ptr)**(ptr),*(ptr)**(ptr)**(ptr));
    return 0;
}