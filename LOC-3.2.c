#include <stdio.h>

//Compiler version gcc  6.3.0
void fact(int);
void main()
{
  int n;
  printf("Enter a no. whose factorial is needed :");
  scanf("%d",&n);
  fact(n);
}
void fact(int b)
{
  int f=1,i;
  for(i=1;i<=b;i++)
  f*=i;
  printf("The %d! = %d",b,f);
  
}