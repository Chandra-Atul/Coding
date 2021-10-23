#include<stdio.h>
void main(){
	int n,a,i;
	scanf("%d",&n);
	while(a<=n){
	
	i=1;
	while(i<=n){
		if(i%2==0){
			printf("*");
		}
		else{
		printf("%d",i);
	}
		i++;
	}
	    printf("\n");
	     n=n-1;
             }
}





//#include<stdio.h>
//void main(){
//	int n,a,i;
//	scanf("%d",&n);
//	while(a<=n){
//	i=1;
//	while(i<=n){
//		printf("%d",i);
//		i++;
//	}
//	printf("\n");
//	n--;
//}
//}


















