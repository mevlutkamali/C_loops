#include<stdio.h>
main()
{
	int sayi=1000;
	int bas1,bas10,bas100,bas1000;
	int sonuc=0;
	int z;
	for(int i=sayi;i<9999;i++)
	{
		z=i;
		bas1=z%10;
		z=z/10;
		bas10=z%10;
		z=z/10;
		bas100=z%10;
		z=z/10;
		bas1000=z%10;
		if((bas1+bas10)==(bas100+bas1000))
		{
			sonuc=sonuc+1;
		}
	}
	printf("ilk iki basamak toplami ile son iki basamak toplamı esit olan %d tane 4 basamakli sayi var.",sonuc);
	
}
