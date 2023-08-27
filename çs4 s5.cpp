#include<stdio.h>
main()
{
	int sayi1;
	printf("Bir deger giriniz : ");
	scanf("%d",&sayi1);

	int sayi2;
	printf("Bir deger giriniz : ");
	scanf("%d",&sayi2);
	int asal=0;int adet=0;
	for(int i=sayi1;i<=sayi2;i++)
	{
		asal=0;
	//	printf("\n----%d-----",i);
		for(int a=1;a<=i;a++)
		{
		//	printf("\n+++++%d+++++",a);
			if(i%a==0)
			{
				asal=asal+1;
			}
		}
		if(asal==2)
		{
		//	printf("\n----asal+1-----");
			adet=adet+1;
		}
		
	}
			printf("%d ile %d arasinda %d tane asal sayi vardir",sayi1,sayi2,adet);
	
		
}
