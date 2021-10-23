#include<stdio.h>
void main(){
	int b,n,a,i;
	scanf("%d",&n);
	i=1;
	a=1;
	while(a<=n){
		b=n;
	while(i<=b){
          printf("%d",b);
          b=b-1;
	}
	printf("\n");		
	n=n-1;
}
}
