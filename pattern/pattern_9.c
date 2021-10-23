#include<stdio.h>
void main(){
	int n,a,i;
	scanf("%d",&n);
	i=1;
	while(i<=n){
           a=1;
		while(a<i){
			if(i%2==a%2){
				printf("%d",a);
			}
			else{
				printf("*");
			}
			a++;
		}
		
		printf("%d\n",i);
		i++;
	}
	
}
