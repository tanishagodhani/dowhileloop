#include<stdio.h>
main()
{
	int a=1,n;
	printf("enter num=");
	scanf("%d",&n);
	
	do{
		printf("%d\n",a);
		a++;
		
	}while(a<=n);
}
