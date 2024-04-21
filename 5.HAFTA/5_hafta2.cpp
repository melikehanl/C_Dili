/* iki bilinmeyenli bir denklemin çözümü......x=? , y=?
ax+by=c
dx+ey=f 

x=(ce-bf)/(ae-bd)
y=(af-cd)/(ae-bd)
*/
#include<stdio.h>
main()
{
	float x,y;
	int a,b,c,d,e,f;
	
	//tanýmlanan deðiþkenlere deðer atamasý toplu bir þekilde yapýlýyor...
	printf("\n Lutfen sirasiyla a , b, c, d, e, f katsayýlarýnýn deðerlerini giriniz");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	
	//girilen katsayýlar eþliðinde x ve y çözülüyor...
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	
	//x ve y deðerlerinin sonucu yazdýrýlýyor.....
	printf("\nx = %f \ny = %f",x,y);
	
}
