#include <stdio.h>
#include<math.h>
int main() {
 float avg;   
 int k=0;
 int N;
 scanf("%d",&N);   
int arr[N];
for(int i=0; i<N;i++){
    scanf("%d", &arr[i]);
  k+=arr[i];
}
avg = (float)k / N;
printf("%.12f", avg);
    return 0;
}