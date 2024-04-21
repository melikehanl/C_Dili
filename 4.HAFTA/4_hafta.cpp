#include "stdio.h"
#include "math.h"  // math.h matematiksel fonksiyonlarý içeren küt.
main()
{  
	float a,y; //ondalýklý deðerleri tanýmlamak için kullanýlýr
	printf("\n a nin deðerini gir");
	scanf("%f",&a);// scanf kullanýcýnýn bir deðiþkene deðer atamasý için kullanýlýr
	// deðiþken tipi float ise %f kullanýlýr
	// hangi deðiþkene deðer atanacaksa & ile kkullanýlýr
	y=pow(a+2,1.0/3.0)/pow(a+56,1.0/4.0)+a;
	//pow fonksiyonu iki parametre alýr
	//1.si taban deðeri, 2.si ise üs deðeridir 2 üzer 5 in açýklamasý
	// pow(2,5) dür.
	printf("\n y=%f",y);
	
	
}

