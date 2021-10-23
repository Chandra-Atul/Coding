#include<stdio.h>
void main(){
	int n,i,a;
	scanf("%d",&n);
	i=1;
	while(i<=n){
		a=1;
		while(a<i){
			printf("%d",i);
			a++;
		}
		printf("%d\n",i);
		i++;
		
	}
}
