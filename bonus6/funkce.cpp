#include "bonus6.h"

void fce(char *text, char c1, char c2, int n)
{
	do
	{
	for (int i = 0; i < strlen(text); i++)
	{
		if (text[i] == c1)
		{
			text[i] = c2;
			n--;
			break;
		}
	}

	} while (n>0);
	printf("\n");
	puts(text);
}