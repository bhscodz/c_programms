#include <stdio.h>
int main()
{
    printf("entre the size of list");
    int a;
    scanf("%d",&a);
    printf("entre the elements of list");
    int arr[a];
    for(int k=0;k<a;k++)scanf("%d",&arr[k]);
    int max=arr[0];
    for(int k=0;k<a;k++)if(arr[k]>max)max=arr[k];
    printf("the max element is %d",max);
    return 0;
}