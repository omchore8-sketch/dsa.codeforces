#include<stdio.h>
 
int main() {
    int a,b;
 
    scanf("%d", & a);
    scanf("%d", & b);
 
    int arr[a];
 
    for (int i = 0; i <a; i++) {
        scanf("%d", & arr[i]);
    }
    int x=0;
    for (int i = 0; i < a; i++) {
        if (arr[i] >= arr[b - 1] && arr[i] > 0) {
            x++;
        }
    }
    printf("%d", x);
 
    return 0;
}