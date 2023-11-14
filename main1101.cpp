#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
    int basla, bitir, a, b ;
    int sayim = 0 ;
	int sayi1, sayi2 ;
	float ort = 0;
char c;
 
 printf("Iki sayi arasindaki asal sayilarin ortalamasini bulma programina hos geldiniz \n \n \n");
 
printf ("Lutfen birinci sayiyi girin. \n");
 scanf("%d", &basla);


                             scanf("%c", &c);
                               if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {						
                                 printf(" \n \n Yanlis deger, lutfen bir rakam giriniz!");
                                   			return 0;	
												   				   }
                               

printf (" \n Lutfen birinci sayidan daha buyuk ikinci bir sayi giriniz. \n");
 scanf("%d", &bitir);
                             scanf("%c", &c);
                               if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {						
                                 printf(" \n \n Yanlis deger, lutfen bir rakam giriniz!!!");
                                          return 0;     
	 }
	 
	 if (basla>=bitir)   {
	    printf (" \n \n Hatali deger, lutfen ikinci degeri birinci degerden daha buyuk giriniz!!! \n \n \n") ;              
			  return 0;
			   }  


// scanf ("%c") ile baslayan kismi kullanicinin harf girmesine karsin uyarmasi amaciyla koydum ve kodu yazdiktan 
//sonra internetten kopyalarak ekledim

//if basla>=bitir komutuyla ikinci sayinin daha kucuk girilmesi durumunda programin bitmesini sagladim
 
 // Yukaridaki kisim kullanici arayuzunu olusturur ve programda kullanilacak deðerlerin tanimlanmasi saglar
   
 printf(" \n Girilen araliktaki asal sayilar: ");

for (a = basla; a <= bitir; a++) {
     
	  for (b = 2; b * b <= a; b++) {
      if (a % b == 0) {
	    break;
            } 
		}
   
  if (b * b > a) {
         printf("%d ", a);
         ort += a;
          sayim++;
    	}
   

    }

 if (sayim > 0) {
        float ortalama = ort / sayim;
        printf("\n \n Girilen araliktaki asal sayilarin ortalamasi: %.2f", ortalama);
    } 
	else 
	{
        printf("Girilen aralikta asal sayý bulunmamaktadir.");
    }

    return 0;
}



























