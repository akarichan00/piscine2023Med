int		max(int* tab, unsigned int len)
{
	unsigned i;
	int tmp;

	i = 1;
	while (i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}
#include <stdio.h>
int main()
{
	int arr[101];int i = 0; 
	while (i <= 10) {
    	arr[i] = i;
		i++;
	}
	unsigned int len = sizeof(arr) / sizeof(arr[0]);
	int result = max(arr, len);
    printf("%i\n",result);
}