#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int p[101], ans[101];
 
    for(int i = 1; i <= n; i++) {
        scanf("%d", &p[i]);
        ans[p[i]] = i;   
    }
 
    for(int i = 1; i <= n; i++) {
        printf("%d ", ans[i]);
    }
 
    return 0;
}