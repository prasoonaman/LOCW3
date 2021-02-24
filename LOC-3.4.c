#include <stdio.h>

//Compiler version gcc  6.3.0
int fact(int n)
{
  if(n==1||n==0)
  return 1;
  else
  return n*fact(n-1);
}
void main()
{
  int a;
  printf("Enter a no. :");
  scanf("%d",&a);
  printf(" %d != %d",a,fact(a));
  
  
}