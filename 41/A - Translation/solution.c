#include <stdio.h>
#include <string.h>
 
int main() {
    char s[101], t[101];
    
    scanf("%s", s);
    scanf("%s", t);
    
    int lend = strlen(s);
    int gend = strlen(t);
    
    if(lend == gend){
    for(int i = 0; i < lend; i++) {
        if(s[i] != t[lend - i - 1]) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
} else {
    printf("NO");
}
 
    return 0;
}