/* probelem: 
birimkar=sat�� fiyat�- maliyet
toplamkar=birimkar*miktar
*/
#include<stdio.h>
main()
{
	//kullanaca��m�z de�i�kenleri float tipinde tan�mlad�k
	float satisFiyati,Maliyet,Miktar,ToplamKar,BirimKar;
	/*
	//kullan�c�dan sat�� fiyat�n� girmesini istiyoruz
	printf("\nsatis fiyatini l�tfen giriniz....");
	//girilen de�eri satisFiyati de�i�kenine atamas�n� yap�yoruz
	scanf("%f",&satisFiyati);
	
	//kullan�c�dan maliyet de�erini girmesini istiyoruz...
	printf("\nlutfen maliyet degerini gir...");
	//girilen de�eri Maliyet degiskenine atamas�n� yap�yoruz
	scanf("%f",&Maliyet);
	
	//kullan�c�dan miktar de�erini girmesini istiyoruz...
	printf("\n lutfen miktar degerini giriniz...");
	//girilen de�eri miktar degiskenine atamas� yap�yoruz
	scanf("%f",&Miktar);
	
	*/
	printf("\nLutfen Sirasiyla MAliyeti, Satis Fiyatini ve Miktar de�erlerini Giriniz");
	scanf("%f%f%f",&Maliyet,&satisFiyati,&Miktar);
	
	//birim kar ve toplam kar hesaplamalar�n� yap�yoruz...
	BirimKar=satisFiyati-Maliyet;
	ToplamKar=BirimKar*Miktar;
	
	
	
	//i�lem sonu�lar� ekrana yazd�r�l�yor
	printf("\B�r�m Kar = %f",BirimKar);
	printf("\nToplam Kar = %f",ToplamKar);
	
}

