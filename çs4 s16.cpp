#include<stdio.h>
main()
{
	int sayi=0;
	printf("Bir deger giriniz = ");
	scanf("%d",&sayi);
	
	int sonuc=1;
	for(int i=1;i<=sayi;i++)
	{
		sonuc=1;
		for(int a=0;a<i;a++)
		{
			sonuc=sonuc*i;
		}
		printf("\n%d^%d=%d",i,i,sonuc);
		
	}
}
