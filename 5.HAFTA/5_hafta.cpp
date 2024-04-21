/* probelem: 
birimkar=satýþ fiyatý- maliyet
toplamkar=birimkar*miktar
*/
#include<stdio.h>
main()
{
	//kullanacaðýmýz deðiþkenleri float tipinde tanýmladýk
	float satisFiyati,Maliyet,Miktar,ToplamKar,BirimKar;
	/*
	//kullanýcýdan satýþ fiyatýný girmesini istiyoruz
	printf("\nsatis fiyatini lütfen giriniz....");
	//girilen deðeri satisFiyati deðiþkenine atamasýný yapýyoruz
	scanf("%f",&satisFiyati);
	
	//kullanýcýdan maliyet deðerini girmesini istiyoruz...
	printf("\nlutfen maliyet degerini gir...");
	//girilen deðeri Maliyet degiskenine atamasýný yapýyoruz
	scanf("%f",&Maliyet);
	
	//kullanýcýdan miktar deðerini girmesini istiyoruz...
	printf("\n lutfen miktar degerini giriniz...");
	//girilen deðeri miktar degiskenine atamasý yapýyoruz
	scanf("%f",&Miktar);
	
	*/
	printf("\nLutfen Sirasiyla MAliyeti, Satis Fiyatini ve Miktar deðerlerini Giriniz");
	scanf("%f%f%f",&Maliyet,&satisFiyati,&Miktar);
	
	//birim kar ve toplam kar hesaplamalarýný yapýyoruz...
	BirimKar=satisFiyati-Maliyet;
	ToplamKar=BirimKar*Miktar;
	
	
	
	//iþlem sonuçlarý ekrana yazdýrýlýyor
	printf("\Býrým Kar = %f",BirimKar);
	printf("\nToplam Kar = %f",ToplamKar);
	
}

