 // date Mon, Sep  9, 2024  1:00:17 AM 
 // created by bhaskar 
#include<stdio.h>
int main(){
    int con;
    float ch;
    printf("enter the amount of consumption \n");
    scanf("%d",&con);
    if(con>0 && con<200){
        ch=con*0.5;
    }
    else if(400>=con && con>=210){
        ch=(con-200)*0.65+100;
    }
    else if(600>=con && con>401){
        ch=(con-400)*0.8+230;
    }
    else if(con>600){
        ch=(con-600)*125+425;
    }
    else{
        printf("charge cant be calculated for entered consumption");
    }
    printf("amount to be paid by customer %f",ch);
    return 0;
}