#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    return 0;
}