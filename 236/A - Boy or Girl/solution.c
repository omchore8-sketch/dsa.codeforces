#include<stdio.h>
 
#include<string.h>
 
int main() {
    int length = 0;
    int j;
    char string[101];
    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++) {
        int isdistinct = 1;
        for (int j = i + 1; string[j] != '\0'; j++) {
            if (string[i] == string[j]) {
                isdistinct = 0;
                break;
            }
        }
        if (isdistinct) {
            length++;
 
        }
    }
    if (length % 2 == 0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }
 
    return 0;
}