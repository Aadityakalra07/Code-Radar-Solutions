#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(i==0 || i==n){
            if(arr[0]>arr[1]){
                printf("%d",arr[0]);
            }
            if(arr[n]>arr[n-1]){
                printf("%d",arr[n]);
            }
        }
        else if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])){
            printf("%d",arr[i]);
            return 0;
        }
        else{
            printf("%d",-1);
            return 0;
        }
    }
    return 0;
}