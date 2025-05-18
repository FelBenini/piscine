/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:29:52 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/18 10:22:53 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_ascendant(char *n)
{
	int	i;

	i = 1;
	while (n[i])
	{
		if (n[i] <= n[i - 1])
			return (0);
		i++;
	}
	return (1);
}

int	intlen(int n)
{
	if (n < 10)
		return (1);
	return (1 + intlen(n / 10));
}

void	ft_convert_int_to_char(int n, char *c)
{
	int	i;
	int	temp;

	temp = n;
	i = intlen(n) - 1;
	while (i >= 0)
	{
		c[i] = (temp % 10) + '0';
		temp /= 10;
		i--;
	}
	c[intlen(n)] = '\0';
}

void	ft_print_formatted(int n, int n_digits, int *is_first)
{
	int		i;
	char	c[12];

	ft_convert_int_to_char(n, c);
	i = 0;
	if ((intlen(n) < n_digits - 1) || (n_digits == 2 && n == 0))
		return ;
	if (!*is_first && ft_is_ascendant(c))
		write(1, ", ", 2);
	if (intlen(n) == n_digits - 1 && ft_is_ascendant(c))
		write(1, "0", 1);
	while (i < n_digits && ft_is_ascendant(c) && c[i])
	{
		write(1, &c[i], 1);
		*is_first = 0;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	is_first;

	i = 0;
	is_first = 1;
	if (n <= 0 || n >= 10)
		return ;
	while (intlen(i) <= n)
	{
		if (i > 123456789)
			break ;
		ft_print_formatted(i, n, &is_first);
		i++;
	}
}
//
// int	main(void)
// {
// 	ft_print_combn(8);
// }
