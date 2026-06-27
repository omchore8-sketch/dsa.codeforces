#include <stdio.h>
 
int main() {
    int n,p,q,r, count=0;
   if( scanf("%d",&n) !=1) return 0;
    while(n--){
      scanf("%d %d %d", &p, &q, &r);
     if(p+q+r>=2){
     count++;
     }
        
        
    }
	printf("%d",count);
	return 0;
}
 