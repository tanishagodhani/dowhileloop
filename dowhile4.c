#include<stdio.h>
main()
{
	int a=1,n;
	printf("enter num=");
	scanf("%d",&n);
	
	do{
		printf("%d\n",n);
		n--;
		
	}while(n>=a);
}
