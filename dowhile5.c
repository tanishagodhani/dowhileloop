#include<stdio.h>
main()
{
	int a=1,n;
	printf("enter num=");
	scanf("%d",&n);
	
	do{
		if(a%2!=0)
		{
			printf("%d number id odd\n",a);
		}
		a++;
		
	}while(a<=n);
}
