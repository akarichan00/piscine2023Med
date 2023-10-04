#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned long i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet %= i;
			i /= 2;
		}
		else
		{
			write(1, "0", 1);
			i /= 2;
		}
	}
}

int main()
{
unsigned char octet = 2;
print_bits(octet);
}