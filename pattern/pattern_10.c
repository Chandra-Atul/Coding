#include<stdio.h>
void main(){
	int n,a,i;
	scanf("%d",&n);
	i=1;
	while(i<=n){
		a=1;
	while(a<i){
		if(a==1){
			printf("*");
		}
		else{
			printf("%d",a);
		}
		a++;
	}		
		printf("*\n");
		i++;
	}
}
