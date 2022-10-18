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

char	*ft_strcapitalize(char	*str)
{
	int		c;
	int		x;

	c = 0;
	x = 0;
	while (str[c] != '\0')
	{
		if (x == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 'a' - 'A';
			x++;
		}
		else if (x > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 'a' - 'A';
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			x = 0;
		else
			x++;
		c++;
	}
	return (str);
}
/*int    main(void)
{
    char    x[] = "salut comment ? 42mots";
    char    y[] = "sALUT cOMMENT ? 42Mots";
    printf("x: %s, y: %s", ft_strcapitalize(x), ft_strcapitalize(y));
    return (0);
}*/
