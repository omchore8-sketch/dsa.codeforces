#include<stdio.h>
 
#include<ctype.h>
 
#include<string.h>
 
int main() {
    char string1[101];
    char string2[101];
    scanf("%s", & string1);
    for (int i = 0; string1[i] != 0; i++) {
        string1[i] = toupper(string1[i]);
    }
    scanf("%s", & string2);
    for (int j = 0; string2[j] != 0; j++) {
        string2[j] = toupper(string2[j]);
    }
    char result2 = strcmp(string1, string2);
    if (result2 < 0) {
        printf("-1");
    }
    else if (result2 > 0) {
        printf("1");
    }
    else if (result2 == 0) {
        printf("0");
    }
 
 
    return 0;
}