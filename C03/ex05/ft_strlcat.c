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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	if (size <= i)
		j = j + size;
	else
		j = j + i;
	k = 0;
	while (src[k] && (i + 1) < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (j);
}
/*
 int        main(void)
 {
     char dest[20] = "MURAT";
     char src[] = "Danaci";
     unsigned int size = 10;
     unsigned int result;

     printf("\nDestination = %s\nSource = %s\nNumber = %d\n\n", dest, src, size);
     result = ft_strlcat(dest, src, size);
     printf("Destination = %s\nResult = %d\n", dest, result);

     return (0);
 }
*/
