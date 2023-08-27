#include<stdio.h>
main()
{
	int sonuc=1;
	int taban;
	int us;
	printf("Taban sayisini giriniz = ");
	scanf("%d",&taban);
	printf("\nUs sayisini giriniz = ");
	scanf("%d",&us);

	for(int i=0;i<us;i++)
	{
		sonuc=sonuc*taban;
	}
	printf("\n%d^%d=%d",taban,us,sonuc);


}
