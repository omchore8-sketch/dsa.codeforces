#include <stdio.h>
 
int main() {
    int n, prev, curr;
    scanf("%d", &n);
 
    if (n <= 0) return 0;
 
    scanf("%d", &prev);
 
    int groups = 1;
 
    for (int i = 1; i < n; i++) {
        scanf("%d", &curr);
        if (curr != prev) {
            groups++;
        }
        prev = curr;
    }
 
    printf("%d
", groups);
    return 0;
}