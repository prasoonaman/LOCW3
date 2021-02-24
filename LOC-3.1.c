#include <stdio.h>

//Compiler version gcc  6.3.0
void square(float);
void main()
{
  float a;
  printf("Enter a no. :");
  scanf("%f",&a);
  square(a);


 }
 void square(float b)
 {
   printf("the square of %f is %f :",b,b*b);
 }