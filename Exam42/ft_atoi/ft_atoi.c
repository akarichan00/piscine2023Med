
int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;

    // skip leading whitespace '\r' '\n' ...
    while(str[i] <= 32)
        i++;
    //handle sign
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        // * 10 to get wa7adat , 3asharat , mi2at ...
        result = result * 10;
        
        //convert from char to int
        result += str[i] - '0';
        i++;
    }
    return (result * sign);
}

#include <stdio.h>

int main()
{
    const char *str1 = "p--22445234";
    printf("%i\n", ft_atoi(str1));
}