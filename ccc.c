#include<stdio.h>

int Fibonacci(int);

int main()
{
   int n, i = 0, c;

   printf("How many numbers of the Fibonacci series do you want to show:\n");
   scanf("%d",&n);

   printf("Fibonacci series\n");

   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++;
   }

   return 0;
}

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
// its not for  factorial
//fibonacci = 0,1+0,1+2......