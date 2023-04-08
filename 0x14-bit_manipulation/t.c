#include <stdio.h>

unsigned int binary_to_uint(const char *b);
int main(void)
{
    int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
/*
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, num = 0, sum = 0, pow = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
		;

	while (len--)
	{
		if (b[len] != 0 && b[len] != 1)
			return (0);

		if (b[len] == 1)
		{
			num = 1 << pow;
			sum = sum + num;
		}
		pow++;
	}
	return (sum);
}
*/
