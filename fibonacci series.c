#include<stdio.h>
void main(){
	int a,n,n1,n2,n3,n4,sum,count;
	n1=0;
	n2=1;
	printf("enter the number of element:-");
	scanf("%d",&n);
	printf("%d\n%d\n",n1,n2);
	a=1;
         while(a+1<n){
         	n3=n1+n2;
         	printf("%d\n",n3);
         	n1=n2;
         	n2=n3;
         	a=a+1;
		 }



}
