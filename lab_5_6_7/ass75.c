#include <stdio.h>
int main()
{
    int arr[10][4];
    for(int i=0;i<10;i++){
        arr[i][0]=i+1;
        printf("enter the marks of student %d\n",i+1);
        for(int k=1;k<4;k++){
            printf("subject %d\n:",k);
            scanf("%d",&arr[i][k]);
        }
    }
    printf("total marks scored by students \n");
    for(int i=0;i<10;i++){
        printf("student %d:%d \n",i+1,arr[i][1]+arr[i][2]+arr[i][3]);
    }
    for(int j=1;j<4;j++){
    printf("heighest marks in subject %d \n",j+1);
    int h=0;
    int roll;
    for(int i=0;i<10;i++){
        if(arr[i][j]>h){
            h=arr[i][j];
            roll=i+1;
        }
    }
    printf("marks :%d roll number:%d\n",h,roll);
    }
    printf("heighest total marks \n");
    int h_t=0;
    int h_r;
    for(int x=0;x<10;x++){
        int total=arr[x][1]+arr[x][2] +arr[x][3];
        if(total>h_t){
            h_t=total;
            h_r=x+1;
        }
    }
    printf("%d roll_no:%d",h_t,h_r);
    return 0;
}