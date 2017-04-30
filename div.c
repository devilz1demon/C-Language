#include<stdio.h>
#include "div.h"

float div(double a, double b)
{
        float c;
        c=(double)a/(double)b;
        printf("The Division of %f and %f is %f \n",a,b,c);
        return 0;
}

