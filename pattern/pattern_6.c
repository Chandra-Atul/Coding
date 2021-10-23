#include<stdio.h>
void main(){
	int n,a,i;
	scanf("%d",&n);
	i=1;
	while(i<=n){
		a=1;
		while(a<i){
			if(a%2==0){
			printf("*");
            }
            else{
            	printf("%d",a);
			}
			a++;
		}
		 if(i%2==0){
		 	printf("*\n");
		 }
		 else{
		 	printf("%d\n",i);
		 }	
		i++;
	}
}
