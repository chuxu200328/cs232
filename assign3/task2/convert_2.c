#include <stdio.h>
#include <stdlib.h>
// Program to convert a 32-bit Decimal numbers to Binary
// 1) Do not change the signature of convert_2, or your task receives zero
// 2) No globals allowed.
char *convert_2(int dec)
{
	int c, d, t;
	char *p;

	t = 0;
	p = (char *)malloc(40);

	for (c = 39; c >= 0; c--)
	{
		d = dec >> c;

		if (d & 1)
			*(p + t) = 1 + '0';
		else
			*(p + t) = 0 + '0';
		if (c % 5 == 0)
			*(p + t) = ' ';
		t++;
	}
	*(p + t) = '\0';

	return p;
}

int main()
{
	int n;
	char *bin;
	printf("Enter the Decimal Number\n");
	scanf("%d", &n);
	bin = convert_2(n);
	printf("The Binary Notation of %d is\t 0b%s\n", n, bin);
	free(bin);
}
