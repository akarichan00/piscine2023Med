/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noben-ai <noben-ai@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:33:33 by noben-ai          #+#    #+#             */
/*   Updated: 2023/09/23 15:44:19 by noben-ai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while(str[i] == '-' || str[i] == '+')
    {
        if(str[i] =='-')
        {   
            sign *= -1;
            i++;
        }
        else if (str[i] == '+')
        {
            i++;
        }
    }
    while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result * sign);
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("result %i\n", ft_atoi(argv[1]));
    }
    
}