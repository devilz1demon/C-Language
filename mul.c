#include<stdio.h>
#include "mul.h"

float mul(double a, double b)
{
        float c;
        c=(double)a*(double)b;
        printf("The Multiplication of %f and %f is %f \n",a,b,c);
        return 0;
}

