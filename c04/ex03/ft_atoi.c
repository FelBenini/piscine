/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:43:16 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/01 15:05:15 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	negative = 1;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			negative *= -1;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - '0';
			if (str[i + 1] <= '0' || str[i + 1] >= '9')
				break ;
		}
		else if (str[i] != '-' && str[i] != ' ' && str[i] != '+')
			break ;
		if ((str[i] == '-' || str[i] == '+') && str[i + 1] == ' ')
			break ;
		i++;
	}
	return (result * negative);
}/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	*input;

	input = argv[1];
	if (argc != 2)
	{
		printf("Por favor, passe um input");
		return (0);
	}
	printf("%d", ft_atoi(input));
	return (0);
}*/
