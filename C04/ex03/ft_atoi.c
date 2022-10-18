/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mudanaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:29:08 by mudanaci            #+#    #+#           */
/*   Updated: 2022/10/18 16:29:10 by mudanaci           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int        ft_atoi(char *str)
{
    int result;
    int signe;
    int i;

    result = 0;
    signe = 1;
    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            signe = signe * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    if (signe == -1)
        return (-result);
    else
        return (result);
}

/*
int        main(void)
{
    printf("%d\n", ft_atoi("          ---+--+-2147--+-ab567"));

}
*/
