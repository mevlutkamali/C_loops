#include<stdio.h>
main()
{
	int sayi,bs,sayi1;
	int oncekisayi;
	printf("DEGER... : ");
	scanf("%d",&sayi);
	oncekisayi=sayi;
	for(int i=0;i<2;i=i)
	{
		printf("DEGER : ");
		scanf("%d",&sayi1);
		if(sayi1>oncekisayi)bs++;
		oncekisayi=sayi1;
		if(sayi1==0)i=2;
	}
	printf("girilen sirada %d kez sayi buyutuldu",bs);
}
