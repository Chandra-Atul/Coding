#include<stdio.h>
void main(){
	int n,a,b,sum;
	printf("enter your number\n");
	scanf("%d",&n);
    sum=0;
	while(n>0){
//		printf("%d",n%10);
		sum=sum+n%10;
	n=n/10;
	}
	printf("%d",sum);
}
