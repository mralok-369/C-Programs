#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int minsum=0,maxsum=0;
    for(i=0; i<n-1; i++){
        minsum+=arr[i];
    }
    for(i=1; i<n; i++){
        maxsum+=arr[i];
    }
    printf("%d %d",minsum,maxsum);
    return 0;
}
