#include <stdio.h>
#include <stdio.h>
int main()
{   
    printf("enter the size of array");
    int a;
    scanf("%d",&a);
    int arr1[a];
    printf("enter the values of array");
    for(int k=0;k<a;k++){
        scanf("%d",&arr1[k]);
    }
    int arr2[a];
    for(int k=a-1;k>=0;k--){
        *(arr2+k)=*(arr1+a-k-1);
    }
    printf("elements of second array");
    for(int k=0;k<a;k++){
        printf("%d  ",arr2[k]);
    }

    return 0;
}