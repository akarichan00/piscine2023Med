int  is_power_of_2(unsigned int n)
{
    unsigned long i = 1;
    while (i < 0xffffffff)
    {
        if (i == n)
            return 1;
        i *= 2;
    }
    return 0;
}

#include <stdio.h>

int main ()
{
unsigned int n = 128; // The maximum 32-bit value
int result = is_power_of_2(n);
// Expected result: 0 (since the maximum value is not a power of 2)
    printf("result: %i\n", result);
}