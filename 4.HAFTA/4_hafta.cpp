#include "stdio.h"
#include "math.h"  // math.h matematiksel fonksiyonlar� i�eren k�t.
main()
{  
	float a,y; //ondal�kl� de�erleri tan�mlamak i�in kullan�l�r
	printf("\n a nin de�erini gir");
	scanf("%f",&a);// scanf kullan�c�n�n bir de�i�kene de�er atamas� i�in kullan�l�r
	// de�i�ken tipi float ise %f kullan�l�r
	// hangi de�i�kene de�er atanacaksa & ile kkullan�l�r
	y=pow(a+2,1.0/3.0)/pow(a+56,1.0/4.0)+a;
	//pow fonksiyonu iki parametre al�r
	//1.si taban de�eri, 2.si ise �s de�eridir 2 �zer 5 in a��klamas�
	// pow(2,5) d�r.
	printf("\n y=%f",y);
	
	
}

