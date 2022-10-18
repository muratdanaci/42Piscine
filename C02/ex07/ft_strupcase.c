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

#include <stdbool.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
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
		if (curr >= 'a' && curr <= 'z')
		{
			str[index] = curr - 32;
		}
		index++;
	}
	return (str);
}
/*
int     main(void)
{
    char    *str_base;
    char    str_upper[6];
    int     index;

    str_base = "heLl0";
    index = 0;
    while (index < 6)
    {
        str_upper[index] = str_base[index] + 0;
        index++;
    }
    ft_strupcase(&str_upper[0]);
    printf("String : %s\n", str_base);
    printf("UPPERCASE : %s\n", str_upper);
}
*/
