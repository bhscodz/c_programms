#include <stdio.h>
struct students{
    char name[20];
    int roll_no;
    int marks;
};
void fun(struct students *arr){
    for(int i=0;i<10;i++){
        if((arr+i)->marks>500){
            printf("%s\n",(arr+i)->name);
        }
        
    }
}
int main(){
    struct students arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("enter the details of student number %d \n",i+1);
        printf("enter the name of student \n");
        scanf("%s",&arr[i].name);
        printf("enter the marks of student \n");
        arr[i].roll_no=i+1;
        scanf("%d",&arr[i].marks);
    }
    fun(arr);
    
    return 0;
}