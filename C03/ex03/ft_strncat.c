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
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while ((n < nb) && src[n])
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}
/*
int        main(void)
{
    char dest[] = "123";
    char src[] = "4567890";
    unsigned int nb = 3;

    printf("Destination = %s\nSource = %s\nNumber to add = %d\n", dest, src, nb);
    ft_strncat(dest, src, nb);
    printf("Result = %s\n", dest);

    return (0);
}
*/
