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
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		lenght;

	i = 0;
	lenght = 0;
	while (dest[i])
	{
		lenght++;
		i++;
	}
	i = 0;
	while (src[i])
	{
		dest[lenght + i] = src[i];
		i++;
	}
	dest[lenght + i] = '\0';
	return (dest);
}
/*
int        main(void)
{
    char dest[] = "Hello";
    char src[] = ", world!";

    printf("Destination = %s\nSource = %s\n", dest, src);
    ft_strcat(dest, src);
    printf("Result = %s\n", dest);

    return (0);
}
*/
