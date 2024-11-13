#include <stdio.h>
int main(){
int arr[]={1,2,3,4,5,23,19,20,26,5};
int odd;
int even;
for(int i=0;i<10;i++){
if(arr[i]%2!=0){
odd+=1;
};
even=10-odd;
};
printf("no of odd numbers %d\nno od even numbers %d",odd,even)
;
return 0;
}
