/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:43:16 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/13 15:36:10 by fbenini-         ###   ########.fr       */
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
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * negative);
}
// #include <stdio.h>
// int	main(int argc, char *argv[])
// {
// 	char	*input;
//
// 	input = argv[1];
// 	if (argc != 2)
// 	{
// 		printf("Por favor, passe um input");
// 		return (0);
// 	}
// 	printf("%d\n", ft_atoi(input));
// 	return (0);
// }
