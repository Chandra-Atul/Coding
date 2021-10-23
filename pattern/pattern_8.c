#include<stdio.h>
void main(){
	int n,i,a;
	scanf("%d",&n);
	i=1;
	while(i<=n){
		if(i%2==0)
		{
			a=1;
				while(a<i){
			printf("*");
			a++;
		}
			printf("*\n");
	}
		
		else{
		a=1;
		while(a<i){
			printf("%d",a);
			a++;
		}
		printf("%d\n",i);
	}
		i++;
	}
}
