#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include "Fact1.h"
float Ryad (float x)
{
 int n,i,k;
 float z,y;
 z = 0;
 for (i = 0 ; i <= 21 ; i++)
 {
     y = 1;
         for ( n=0; n < 21; n++)
     {
     y = y * (cos(n*x)/Fact1(n));     
     }     
    // y = y / Fact1(n);
     z = z + y;
 }
 return z;
}

float Fn (float x)
{
      float y;
      y = (exp(cos(x)))*cos(sin(x));
      return y;
}
