#include<stdio.h>
#include<math.h>
void main(){
	int n,count,b,sum;
	sum=0;
	printf("enter your number\n");
	scanf("%d",&n);
	b=n;
	
	while(n>0){
	//	sum=sum+n%10;
		n=n/10;
      count=count+1;	
}
	//printf("%d\n",sum);
	printf("%d\n",count);
		n=b;
		while(n>0){
		sum=sum+pow((n%10),count);
		
		n=n/10;	
		}
		printf("%d\n",sum);
	
	if(sum==b){
		printf("armstrong number");
	}
	else{
		printf("not armstrong number");
	}
}
