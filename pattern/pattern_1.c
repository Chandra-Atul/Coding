#include<stdio.h>
void main(){
	int n,a,i;
	scanf("%d",&n);
	i=1;
	while(i<=n){
		a=1;
		while(a<i){
			printf("%d",a);
			a++;
		}
		printf("%d\n",i);
		i++;
	}
}
