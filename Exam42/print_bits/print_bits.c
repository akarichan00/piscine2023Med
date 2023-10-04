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

// void print_bits(unsigned char octet)
// {
//     for (int i = 7; i >= 0; i--) {
//         char bit = (octet >> i) & 1;
//         char bitChar = '0' + bit;
//         write(1, &bitChar, 1);
//     }
// }

int main()
{
unsigned char octet = 1;
print_bits(octet);
}
