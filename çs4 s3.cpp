#include<stdio.h>
main()
{
	int sayi;int toplam=0;
	scanf("%d",&sayi);
	for(int i=1;i<sayi;i++)
	{
		if(sayi%i==0)toplam=toplam+i;
	}
	if(toplam==sayi)printf("girilen sayi m�kemmel sayidir.");
	else printf("girilen sayi m�kemmel sayi degildir.");
}
