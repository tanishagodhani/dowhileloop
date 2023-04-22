#include<stdio.h>
main()
{
	int a=1,n;
	printf("enter num=");
	scanf("%d",&n);
	
	do{
		if(n%2==0)
		{
			printf("%d number id even\n",n);
		}
		n--;
		
	}while(a<=n);
}
