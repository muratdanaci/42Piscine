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

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_compare(const char *s1, const char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return ((unsigned char)s1[c] - (unsigned char)s2[c]);
}

int	main(int ac, char *av[])
{
	int		c;
	int		d;
	char	*temp;

	c = 1;
	while (c < ac)
	{
		d = 1;
		while (d < ac)
		{
			if (ft_compare(av[c], av[d]) < 0)
			{
				temp = av[c];
				av[c] = av[d];
				av[d] = temp;
			}
			d++;
		}
		c++;
	}
	c = 1;
	while (c < ac)
		ft_putstr(av[c++]);
	return (0);
}
