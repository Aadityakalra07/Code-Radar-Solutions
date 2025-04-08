#include<stdio.h>
int main(){
    int n;
    char ch;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        ch='A';
        for(int space=1; space<n-i; space++){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf("%c",ch);
            ch++;
        }
        printf(" ");
    }
    return 0;
}