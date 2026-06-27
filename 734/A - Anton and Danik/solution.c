/******************************************************************************
 
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
 
*******************************************************************************/
 
#include <stdio.h>
 
int main() {
        int n;
        char A, D;
        int countA = 0;
        int countB = 0;
        char str[1000000];
        scanf("%d", & n);
        scanf("%s", str);
        for (int i = 0;i<n; i++) {
            if (str[i] == 'A') {
                countA++;
            }
            else if (str[i] == 'D') {
                countB++;
            }
        }
            if (countA > countB) {
                printf("Anton");
            }
            else if (countA < countB) {
                printf("Danik");
            }
            else{
                printf("Friendship");
            }
                return 0;
        }