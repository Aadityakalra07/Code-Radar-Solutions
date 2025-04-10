#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
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
    return 0;
}