#include <stdio.h>
#include <stdlib.h>
int dizi_yaz(int x[], int n);
int sirala(int x[], int n);
int maxSum(int x[], int n);

int main(int argc, char *argv[])
{

  int dizi[8]= {4, -3, 2, 1, 6, -1, -2, 4};
  dizi_yaz(dizi, 8);
     printf("\n");
  sirala(dizi, 8);
     printf("\n");
  maxSum (dizi, 8);
  
  system("PAUSE");	
  return 0;
}

int dizi_yaz(int x[], int n)
{ 
     int i;
     for(i=0; i<n; i++){
         printf("%d", x[i]);
     printf("\t");
     }
     printf("\n");
}

int sirala(int x[], int n){    
   
     int i;
     for(i=(n-1)/2; i>=0; i--){
         printf("%d", x[i]);
     printf("\t");
     }
     
     printf("\n");
     for(i=(n)/2; i<n; i++){
         printf("%d", x[i]);
     printf("\t");
     }
     printf("\n");
}

int maxSum(int x[], int n){  
    int maxSum1=0, maxSum=0;
    int i,j;
     for(i=(n-1)/2 ;i>=0 ;i--){
      int sum=0;
      for(j=i; j>=0; j--){
          sum=sum+x[j];
          if(sum>maxSum){
              maxSum=sum;
          }                      
       }    
}
printf("Sol maxSum: %d", maxSum);
printf("\n");
     for(i=(n)/2 ;i<n ;i++){
      int sum=0;
      for(j=i; j<n; j++){
          sum=sum+x[j];
          if(sum>maxSum1){
              maxSum1=sum;
          }                      
       }    
}
printf("Sag maxSum: %d", maxSum1);
printf("\n");


printf("Sol maxSum + Sag maxSum: %d", maxSum1+maxSum);
printf("\n");
}
