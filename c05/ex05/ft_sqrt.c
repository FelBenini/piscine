/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 17:11:19 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/01 17:17:45 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	int num;

	if (argc != 2)
	{
		printf("Por favor, passe um input, como por exemplo `./a.out 4`");
		return (0);
	}
	num = atoi(argv[1]);
	printf("A raíz quadrada de %d é %d", num, ft_sqrt(num));
	return (0);
}*/
