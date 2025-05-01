/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:32:57 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/24 22:15:56 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(char c)
{
	char	*digits;

	digits = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(digits[c / 16]);
	ft_putchar(digits[c % 16]);
}

int	ft_str_is_printable(char c)
{
	int	char_as_int;

	char_as_int = c;
	if (char_as_int < 32 || char_as_int == 127)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_str_is_printable(str[i]))
			print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
