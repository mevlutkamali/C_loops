#include<stdio.h>
main()
{
	int sayi;
	printf("DEGER : ");
	scanf("%d",&sayi);
	int basamak;
	int deger=sayi;
	for(int i=0;i<1;i=i)
	{
		if(deger!=0)
		{
			deger=deger/10;
			basamak++;
		}
		else break;
	}int sonuc=1;
	for(int a=0;a<basamak;a++)
	{
		sonuc=sonuc*10;
	}
	printf("basamak degerinin en yuksek sayisi : %d",(sonuc-1));
	
	
	
}
