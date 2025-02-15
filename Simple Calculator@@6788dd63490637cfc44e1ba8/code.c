#include<stdio.h>
int main(){
    int a,b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    if(op=='+'){
        int aresult=a+b;
        printf("%d",aresult);
    }
    else if(op=='-'){
        int sresult=a-b;
        printf("%d",sresult);
    }
    else if(op=='*'){
        int mresult=a*b;
        printf("%d",mresult);
    }
    else if(op=='/'){
        int dresult=a/b;
        printf("%d",dresult);
    }
    return 0;
}