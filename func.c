#include<stdio.h>
#include"func.h"
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include "mod.h"

int func(int c)
{
	float a,b;
	printf("\n");
	printf("Enter the Numbers to Compute:");
	printf("\n");
	scanf("%f \n %f",&a,&b);
	if(c==1)
	{
		add(a,b);
	}
	else if(c==2)
	{
		sub(a,b);
	}
	else if(c==3)
	{
		mul(a,b);
	}
	else if(c==4)
	{
		div(a,b);
	}
	else if(c==5)
	{
		mod(a,b);
	}
	return 0;
}
