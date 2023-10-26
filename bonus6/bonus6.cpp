// bonus6.cpp : Defines the entry point for the application.
//

#include "bonus6.h"

int main()
{
	char a[MAX], b, c;
	int d;
	printf("Napiste vetu:");
	scanf("%s",a);
	printf("\nCo chcete nahradit:");
	scanf(" %c", &b);
	printf("\nCim:");
	scanf(" %c", &c);
	printf("\nKolikrat:");
	scanf("%d", &d);
	fce(a,b,c,d);
}