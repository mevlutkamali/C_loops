#include<stdio.h>
main()
{//Girilen sayýdan küçük en büyük 3 asal sayýyý bulan program
	int sayi;
	printf("Bir deger giriniz = ");
	scanf("%d",&sayi);
	
	int asal1,asal2,asal3;
	asal1=0;asal2=0;asal3=0;
	
	bool asal;
	for(int i=sayi;i>0;i--)
	{
		asal=true;
		for(int a=2;a<(i-1);a++)
		{
			if(i%a==0)
			{
				asal=false;
			}
		}
		if(asal==true)
		{
			if(i>asal1)asal1=i;
			else if(i>asal2)asal2=i;
			else if(i>asal3)asal3=i;
		}
	}
	printf("%d den kucuk :",sayi);
	printf("\nEn buyuk 1. asal %d",asal1);
	printf("\nEn buyuk 2. asal %d",asal2);
	printf("\nEn buyuk 3. asal %d",asal3);
}
