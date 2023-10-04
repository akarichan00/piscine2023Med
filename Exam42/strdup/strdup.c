#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	int	len;
	char	*copy;

	i = 0;
	len = ft_strlen(src);
	copy = (char*)malloc(sizeof(char) * len + 1);
	if (copy == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}



#include <stdio.h>

int main() {
    char original[] = "aaaaaaaà";
    char *duplicate;

    // Call ft_strdup to duplicate the string
    duplicate = ft_strdup(original);

    if (duplicate == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return an error code
    }

    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);

    // Don't forget to free the memory when you're done with the duplicate
    free(duplicate);

    return 0; // Return success
}