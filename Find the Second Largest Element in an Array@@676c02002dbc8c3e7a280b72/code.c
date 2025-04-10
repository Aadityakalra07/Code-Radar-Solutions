#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = -2147483648;       
    int second = -2147483648;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            second = max;
            max = arr[i];
        } else if(arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }
    if(second == -2147483648)
        printf("%d",-1);
    else
        printf("%d\n", second);
    return 0;
}
