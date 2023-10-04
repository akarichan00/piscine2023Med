
#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t i2;

	i = 0;
	i2 = 0;
	while (s[i] != '\0')
	{
		i2 = 0;
		while (reject[i2] != '\0')
		{
			if (s[i] == reject[i2])
				return (i);
			i2++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
#include <string.h>

int main()
{
	const char *string = "geeksforgeeks";
	const char *substring = "apah";
	printf("index of unmatched char after the first matched char: %zu\n",ft_strcspn(string, substring));
}