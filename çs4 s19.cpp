#include<stdio.h>
main()
{
	int i=10000;
	int bas1,bas10,bas100,bas1000;
	int a;
	for(int z=i;z>0;z--)
	{
		a=z;
		bas1=a%10;
		a=a/10;
		bas10=a%10;
		a=a/10;
		bas100=a%10;
		a=a/10;
		bas1000=a%10;
		a=a/10;
		
		if(bas1!=bas10 && bas1!=bas100 && bas1!=bas1000 && bas10!=bas100 && bas10!=bas1000 && bas100!=bas1000 )
		{
			printf("10000 den kucuk rakamlari farkli en buyuk sayi : %d",z);
			break;
		}
	}
	
}
