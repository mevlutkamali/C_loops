#include<stdio.h>
main()
{
	int sayi;int toplam=0;
	scanf("%d",&sayi);
	for(int i=sayi;i>0;i--)
	{
		toplam=0;
		for(int a=1;a<sayi;a++)
		{
			if(sayi%a==0)toplam=toplam+a;
		}
		
		if(toplam==sayi)
		{		
		printf("%d mükemmel sayidir.",i);
		break;
		}
		else printf("mdh");
	}
	
}
