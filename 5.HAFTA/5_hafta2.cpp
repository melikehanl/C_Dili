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
	
	//tanımlanan değişkenlere değer ataması toplu bir şekilde yapılıyor...
	printf("\n Lutfen sirasiyla a , b, c, d, e, f katsayılarının değerlerini giriniz");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	
	//girilen katsayılar eşliğinde x ve y çözülüyor...
	x=(c*e-b*f)/(a*e-b*d);
	y=(a*f-c*d)/(a*e-b*d);
	
	//x ve y değerlerinin sonucu yazdırılıyor.....
	printf("\nx = %f \ny = %f",x,y);
	
}
