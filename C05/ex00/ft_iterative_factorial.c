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

int	ft_iterative_factorial(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*
int main(void){

    printf("%d\n", ft_iterative_factorial(5));
}
*/
