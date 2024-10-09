#include <stdio.h>
int main(){
    int a=0,b=0,c=0,d=0,e=0,s=0;
    int ballot[20]={1,2,2,2,3,3,4,5,6,7,1,2,4,2,5,3,7,1,2,3};
    printf("reading the ballot..");
    for (int i=0;i<20;i++){
        switch (ballot[i]){
            case 1:
                a+=1;
                break;
            case 2:
                b+=1;
                break;
            case 3:
                c+=1;
                break;
            case 4:
                d+=1;
                break;
            case 5:
                e+=1;
                break;
            default:
                s+=1;
        }
    }
    printf("total number of votes for \ncandidate 1 %d \ncandidate 2 %d\ncandidate 3 %d\ncandidate 4 %d \ncandidate 5 %d\nspoilt vote %d",a,b,c,d,e,s);

}