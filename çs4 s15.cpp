#include <stdio.h>
main()
{
	int ikibasamak=0;
	int sayi=0;
	for(int i=0;i<=1;i=i)
	{
		printf("Bir değer giriniz = ");
		scanf("%d",&sayi);
		if(sayi==-1)break;
		if(sayi<100 && sayi>9 || sayi>-100 && sayi<-9)
		{
			ikibasamak=ikibasamak+1;
		}
	}
	printf("\nIki basamakli %d tane deger girildi.",ikibasamak);
	
}
