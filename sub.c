#include<stdio.h>
#include "sub.h"

float sub(double a, double b)
{
        float c;
        c=(double)a-(double)b;
        printf("The Subtraction of %f and %f is %f \n",a,b,c);
        return 0;
}

