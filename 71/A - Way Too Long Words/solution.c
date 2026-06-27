#include<stdio.h>
#include<string.h>
int main() {
int n;
char str[101];
scanf("%d",&n);
int length;
for(int i=1;i<=n;i++){
    scanf("%s",str);
int length = strlen(str);
char lastchar = str[length-1];
if(length>10){
printf("%c",str[0]);
printf("%d",length-2);
printf("%c
",lastchar);
} 
if(length <= 10) {
printf("%s
",str);
} }
 
 
 
 
 
 
    return 0;
}