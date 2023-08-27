#include <stdio.h>
main()
{
	///yýldýzdan dik üçgen
	/*for(int i=0;i<5;i++)
	{
		for(int a=0;a<=i;a++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	
	//tek sayýda artan yýldýzdan üçgen
	/*for(int i=1;i<=5;i++)
	{
		for(int a=5-i;a>0;a--)
		{
			printf(" ");
		}
		
		for(int y=(2*i-1);y>0;y--)
		{
			printf("*");
		}
		printf("\n");
	}*/
	
	
	//tek sayýda artan içi boþ yýldýzdan üçgen
	for(int i=1;i<=5;i++)
	{
		for(int a=5-i;a>0;a--)
		{
			printf(" ");
		}
		printf("*");
		
		if((2*i-3)>0)
		{
			for(int z=(2*i-3);z>0;z--)
			{
				printf(" ");
			}
			printf("*");
		}
		
		printf("\n");
	}
	
	
	
}
