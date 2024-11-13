#include <stdio.h>
int main(){
int arr[]={1,4,5,22,3,7,8,1,2,10};
int a=0;
for(int i=0;i<10;i++){
a+=arr[i];
}
printf("the sum of all the numbers in list is : %d",a);
return 0;
};
