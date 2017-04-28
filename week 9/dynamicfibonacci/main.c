//Fibonacci Serisini kullanarak Dinamik Programlama
#include<stdio.h>

int fib(int n)
{
  int f[n+1];
  int i;
  f[0] = 0; //f[0] = 1; seklinde de alinabilir.
  f[1] = 1;

  for (i = 2; i <= n; i++)
  {
      f[i] = f[i-1] + f[i-2];
  }

  return f[n];
}

int main ()
{
  int n = 10;
  printf("%d Elemanli Fibonnaci Sonucu: %d",n, fib(n));
  getchar();
  return 0;
}
