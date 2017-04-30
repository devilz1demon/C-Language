#include<stdio.h>
#include"func.h" /* Typed within double quotes it checks for the file in the current directory */
int main()
{
	int c;
	printf("Please Enter The Desired Choice");
	printf("\n");
	printf("	1. Addition");
	printf("\n");
	printf("	2. Subtraction");
	printf("\n");
	printf("	3. Multiplication");
	printf("\n");
	printf("	4. Division");
	printf("\n");
	printf("	5. Modulation");
	printf("\n");
	scanf("%d",&c);
	func(c);
}


