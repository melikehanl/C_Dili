/*bileþik fazi problemi
P=A(1+i)^n
P= dönem sonundaki anapara+fazi miktarý
A=Anapara
i=Fazi yüzdesi
n=zaman
*/
#include<stdio.h>
#include<math.h>
main()
{
	float a,i,n,p;
	printf("\n sýrasýyla Ana Para, Faiz Yuzdesi ve Zaman degerlerini giriniz");
	scanf("%f%f%f",&a,&i,&n);
	
	p=a*pow((1+i),n);
	printf("\n Donem sonu anapara + faiz = %f",p);
}
