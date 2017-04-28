#include <stdio.h>
#include <stdlib.h>

//Kullanici Tanimli iki Matrisin Carpimi
//Oncelikle bu kisimda matrislerimizin boyutlarini belirleyelim.
//Matrislerimizin boyutlaini a[M][N] ve b[N][P] olacak sekilde atama yapiyoruz.

#define M 2  //BIRINCI matrisin SATIR sayisi
#define N 3  //BIRINCI matrisin SUTUN ve IKINCI matrisin SATIR sayisi
#define P 2  //IKINCI matrisin SUTUN sayisi

int main() {

	 int a[10][10],b[10][10],c[10][10]={ },i,j,k; //Degiskenlerimizi ve matrislerimizi tanimladik.
						//Matris dizimizin icini bos biraktik. Cunku bu kismi asagida dolduracagiz.

    printf ("Birinci Matris:\n \n");    //Ilk matrisimizi kullanicidan alalim.

    for (i = 0; i < M; i++)  //Ilk dongu satýr,
	{
    	for (j = 0; j < N; j++)  //Ikýncý dongu sutunu tanimliyor.
		{

        printf ("a[%d][%d]: ",i+1,j+1);
        scanf ("%d", &a[i][j]);
   		 }
    }

  printf ("\nOlusan Matris: \n");   //Matrisi gormek adina ekrana bastiralim.
  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j++)
	{

        printf("%5d",a[i][j]);


    }printf("\n\n");
  }



    printf ("\n\nIkinci Matris: \n \n");   //Ayný islemleri ikinci matrisimiz icin yapiyoruz.

    for (j = 0; j < N; j++)
	{
   		 for (k = 0; k < P; k++)
		{

        printf ("b[%d][%d]: ",j+1,k+1);
        scanf ("%d", &b[j][k]);
	    }
	}

    printf ("\nOlusan Matris: \n");
  for (j = 0; j < N; j++)
  {
    for (k = 0; k < P; k++)
	{

        printf("%5d",b[j][k]);


    }printf("\n\n");
    }


				//Bu kisimda carpma islemi basliyor.
    for (i = 0; i < M; i++)     //Tum dongulerimizi burada donduruyoruz.
	{       	        //Cunku her iki matrisi de burada isleme aliyoruz.
    	for (j = 0; j < P; j++)
		{
    		for (k = 0; k < N; k++)

        	c[i][j] += a[i][k] * b[k][j];    //Her bir elemani tek tek carpip toplayarak atama yapiyor.
   		 }
        printf("\n");
    }

    printf ("Sonuc Matrisi:\n");   //Sonuç matrisimizi ekrana bastýrýyoruz.

    for (i = 0; i < M; i++) //Sonuc Matrisimizin boyutu c[M][P]lik oldugu icin sadece iki donguyu kullaniyoruz.
	{
    	for (k = 0; k < P; k++)

        printf ("\t%d",c[i][k]);
        printf ("\n");
    }

    getch();
    return 0;
}
