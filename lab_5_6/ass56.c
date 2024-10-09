#include <stdio.h>
int main(){
int arr[]={-1,-2,3,0,9,11,12,-10,14};
int neg=0;
int zero=0;
int pos=0;
for(int i=0;i<10;i++)
{
if(arr[i]<0){
neg+=1;
}else if(arr[i]==0){
zero+=1;
}
else{
pos+=1;
};
}
printf("total number of positive negative and zero are %d %d %d",pos,neg,zero);
return 0;
}
