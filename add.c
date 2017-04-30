#include<stdio.h>
#include "add.h"

float add(double a, double b)
{
	float c;
	c=(double)a+(double)b;
	printf("The Addition of %f and %f is %f \n",a,b,c);
	return 0;
}
