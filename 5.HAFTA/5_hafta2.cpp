/* iki bilinmeyenli bir denklemin ��z�m�......x=? , y=?
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
	
	//tan�mlanan de�i�kenlere de�er atamas� toplu bir �ekilde yap�l�yor...
	printf("\n Lutfen sirasiyla a , b, c, d, e, f katsay�lar�n�n de�erlerini giriniz");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	
	//girilen katsay�lar e�li�inde x ve y ��z�l�yor...
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	
	//x ve y de�erlerinin sonucu yazd�r�l�yor.....
	printf("\nx = %f \ny = %f",x,y);
	
}
