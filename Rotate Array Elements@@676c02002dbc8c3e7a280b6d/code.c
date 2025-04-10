#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int j=0; j<k; j++){
    for(int i=0; i<n; i++){
        arr[i+1]=arr[i];
        i++;
    }
    j++;
    }
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    return 0;
}