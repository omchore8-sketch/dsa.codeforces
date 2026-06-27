#include <stdio.h>
#include<ctype.h>
 
int main(){
char string[1001];
scanf("%s",string);
string[0]=toupper(string[0]);
printf("%s",string);
 
    return 0;
}