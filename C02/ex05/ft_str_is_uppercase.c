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

int	ft_str_is_uppercase(char *str)
{
	int		index;
	bool	valid;
	char	curr;

	index = 0;
	valid = true;
	while (true)
	{
		curr = str[index];
		if (curr == '\0')
		{
			break ;
		}
		if (!(curr >= 'A' && curr <= 'Z'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}
/*
int     main(void)
{
    char    *str_valid;
    char    *str_invalid;

    str_valid = "MERHABA";
    str_invalid = "MerHaba";
    printf("%d\n", ft_str_is_uppercase(str_valid));
    printf("%d\n", ft_str_is_uppercase(str_invalid));
}
*/
