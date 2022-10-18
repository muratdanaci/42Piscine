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
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int		index;
	char	curr;

	index = 0;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (curr >= 'A' && curr <= 'Z')
		{
			str[index] = curr + 32;
		}
		index++;
	}
	return (str);
}
/*
int     main(void)
{
    char    *str_base;
    char    str_lower[10];
    int     index;

    str_base = "MeRhAbA01";
    index = 0;
    while (index < 10)
    {
        str_lower[index] = str_base[index] + 0;
        index++;
    }
    ft_strlowcase(&str_lower[0]);
    printf("String: %s\n", str_base);
    printf("lowercase: %s\n", str_lower);
}
*/
