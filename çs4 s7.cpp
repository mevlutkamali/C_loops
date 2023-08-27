#include<stdio.h>
main()
{
	int sayi;
	int asal=0;
	int adet=0;
	for(int i = 1;i > 0;i++)
	{
		printf("deger : ");
		scanf("%d",&sayi);
		asal = 0;
		for(int a = 1;a <= sayi;a++)
		{
			if(sayi % a == 0)
			{
				asal = asal + 1;
			}
		}
		if(asal == 2)
		{
			break;
		}
		else
		{
		adet++;	
		}
	}
	printf("Asal sayi girilmeden once %d tane deger girildi.",adet);
	return 0;
}
