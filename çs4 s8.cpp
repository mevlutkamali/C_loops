#include<stdio.h>
main()
{
	int sayi;
	printf("DEGER : ");
	scanf("%d",&sayi);
	int deger=sayi;
	int basamak=0;
	for(int i=0;i<1;i--)
	{
		if(sayi!=0)
		{
			sayi=sayi/10;
			basamak++;
		}
		else break;
	}
	printf("%d sayisi %d basamaklidir.",deger,basamak);
	


	
}
