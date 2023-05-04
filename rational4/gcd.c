#include "gcd.h"

int gcd(int a, int b)
{
	while (b != 0)
	{
		int remain = a % b;
		a = b;
		b = remain;
	}
	return a;
}
