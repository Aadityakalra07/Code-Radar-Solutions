#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int space=1; space<n-i; space++){
            printf(" ");
        }
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}