#include <stdio.h>
int main() {
    char name[50];
    int age;
    char hobby[100];
    scanf("%s %d\n",&name,&age);
    scanf("%s",&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
    return 0;
}