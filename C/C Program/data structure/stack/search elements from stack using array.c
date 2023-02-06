// search elements from stack using array
#include<stdio.h>
#define MAX 10
int arr[MAX],top=-1,i;

void push(int x){
    if(top==(MAX-1)){
        printf("stack is overflow\n");
    }else{
        arr[++top]=x;
    }
}
void disp(){
    printf("Elements are \n");
    for(i=0; i<=top; i++){
        printf("%d\n",arr[i]);
    }
}

void search(int no){
    int count=0;
    for(i=0; i<=top; i++)
    {
        if(arr[i]==no){
            count=count+1;
        }
    }
    if(count==1){
        printf("Found\n");
    }else{
        printf("Not Found\n");
    }
}
 int main()
 {
     push(10);
     push(20);
     push(30);
     push(40);
     disp();
     search(50);
     return 0;
 }
