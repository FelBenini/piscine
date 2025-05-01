/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:11:13 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/21 17:05:12 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	static int	num;
	static int	print_comma;
	char		result[3];

	result[0] = '0' + (num / 100);
	result[1] = '0' + ((num / 10) % 10);
	result[2] = '0' + (num % 10);
	if (num < 1000)
	{
		num++;
		if (
			(result[2] - '0') > (result[1] - '0')
			&& (result[1] - '0') > (result[0] - '0')
		)
		{
			if (print_comma)
			{
				write(1, ", ", 2);
			}
			write(1, &result, 3);
			print_comma = 1;
		}
		ft_print_comb();
	}
	return ;
}
