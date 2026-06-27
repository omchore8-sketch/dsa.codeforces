#include <stdio.h>
 
#include <stdbool.h>
 
int main() {
    char str[101] = {
        0
    };
    scanf("%s", str);
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '1')
            count1++;
        else if (str[i] == '2')
            count2++;
 
        else if (str[i] =='3')
            count3++;
 
    }
    bool first = true;
 
    for (int i = 0; i < count1; i++) {
        if (!first) printf("+");
        printf("1");
        first = false;
    }
 
    for (int i = 0; i < count2; i++) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }
 
    for (int i = 0; i < count3; i++) {
        if (!first) printf("+");
        printf("3");
        first = 0;
 
    }
    return 0;
}