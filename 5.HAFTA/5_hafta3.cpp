/*bile�ik fazi problemi
P=A(1+i)^n
P= d�nem sonundaki anapara+fazi miktar�
A=Anapara
i=Fazi y�zdesi
n=zaman
*/
#include<stdio.h>
#include<math.h>
main()
{
	float a,i,n,p;
	printf("\n s�ras�yla Ana Para, Faiz Yuzdesi ve Zaman degerlerini giriniz");
	scanf("%f%f%f",&a,&i,&n);
	
	p=a*pow((1+i),n);
	printf("\n Donem sonu anapara + faiz = %f",p);
}
