#include<stdio.h>
#include "mod.h"
#include<math.h>

float mod(double a, double b)
{
	double c,d,e;
	a=a*100000; b=b*100000;
	c=(int)a/(int)b;
	d=(int)b*(int)c;
	e=(int)a-(int)d;
	a=a/100000;b=b/100000;
	if(e==0)
	printf(" %f is divisible by %f \n",a,b);
	else printf(" %f is not divisible by %f \n",a,b);
	return 0;
}
