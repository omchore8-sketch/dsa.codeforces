#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int isHard = 0;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 1) {
            isHard = 1;
        }
    }
    
    if (isHard) {
        printf("hard");
    } else {
        printf("easy");
    }
    
    return 0;
}