#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
#define e 2.718
int main( )
{
	int dizi[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, max, min;
	float ortalama=0.0, toplam=0.0, std_sap=0.0, toplam2=0.0, toplam3=0.0, varyans=0.0, n_dagilim=0.0, carpan=0.0;

    /*max ve min eleman bulma*/
    min = dizi[0];
	max = dizi[0];

	for( i = 1; i < 10; i++ ) {
		if( min > dizi[i] )
			min = dizi[i];
		if( max < dizi[i] )
			max = dizi[i];
	}
	printf( "Min Eleman: %d\n", min );
	printf( "Max Eleman: %d\n", max );


    /* Ortalama hesabi*/
    for( i = 0; i < 10; i++ ) {
		toplam += dizi[ i ];
	}
	ortalama = toplam / 10.0;
    printf( "Ortalama: %.2f\n", ortalama );


     /* standart sapma hesabý */
   for(i=0; i<10; i++){
    toplam2 += pow((dizi[i]-ortalama), 2.0);
    std_sap = sqrt(toplam2/9.0) ;
   }
    printf("Standart sapma = %.2f\n", std_sap);

    /* varyans hesabi*/
    for(i=0; i<10; i++){
       toplam3 += pow((ortalama-dizi[i]), 2.0);
        varyans = (toplam3/9.0) ;
    }
    printf("Standart sapma = %.2f\n", varyans);

    /*normal dagilim hesabi*/
    for(i=0; i<10; i++){
    carpan = 1 / sqrt(2 * PI * std_sap * std_sap );
    n_dagilim = carpan * pow(e,((-1 * (dizi[i]-ortalama) * (dizi[i]-ortalama)) / (2 * std_sap * std_sap) ));

    printf("%d icin Normal dagilim = %.2f\n", dizi[i], n_dagilim);
    }
	return 0;
}
