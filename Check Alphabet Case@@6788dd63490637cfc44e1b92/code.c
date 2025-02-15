#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if((a== Q||W||E||R||T||Y||U||I||O||P||A||S||D||F||G||H||J||K||L||M||N||B||V||C||X||Z)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}