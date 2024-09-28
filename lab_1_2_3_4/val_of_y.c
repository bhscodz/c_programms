 // date Sun, Sep  8, 2024 11:05:43 PM 
 // created by bhaskar 
#include<stdio.h>
#include<math.h>
int main(){
    int y,x,n;
    printf("enter two number to perfor following operation \n \
            1+x where n=1 \n \
            1+x/n where n=2 \n \
    Y(x,n)= 1 +xn when n=3 \n \
            1 + nx when n>3 or n<1 ");
    scanf("%d %d",&x,&n);
    switch (n){
        case 1:y=1+x;
        break;
        case 2:y=1+x/n;
        break;
        case 3:y=1+pow(x,n);
        break;
        default:
        if(n>3 || n<1){
            y=1+n*x;
        }
        else{
            printf("invalid input");
        } ;
        break;
    };
    printf("%d",y);
    return 0;
}