#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int levels[101] = {0};
 
    int p, x;
    scanf("%d", &p);
    for(int i = 0; i < p; i++) {
        scanf("%d", &x);
        levels[x] = 1;
    }
 
    int q, y;
    scanf("%d", &q);
    for(int i = 0; i < q; i++) {
        scanf("%d", &y);
        levels[y] = 1;
    }
    for(int i = 1; i <= n; i++) {
        if(levels[i] == 0) {
            printf("Oh, my keyboard!
");
            return 0;
        }
    }
 
    printf("I become the guy.
");
 
    return 0;
}