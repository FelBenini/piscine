/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:20:03 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/05 12:29:48 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	if (min >= max)
		return (0);
	dest = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	i;
	int	size;

	arr = ft_range(-1, 10);
	size = 11;
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}*/
