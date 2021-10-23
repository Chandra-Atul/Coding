#include<stdio.h>
void main(){
	int n,i,a,b;
	scanf("%d",&n);
     a=1;
     b=n;
    while(a<=b){
	   i=a;
	   n=b;	
	    while(i<=n){
		   printf("%d",n);
		   n=n-1;
	    }
            printf("\n");
              a++;
        }
}
