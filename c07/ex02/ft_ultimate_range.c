/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:35:14 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/07 12:22:49 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	i;
	int	size;

	size = ft_ultimate_range(&arr, -1, 10);
	i = 0;
	printf("size: %d\n", size);
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}*/
