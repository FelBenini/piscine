/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:33:49 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/13 16:01:23 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j ++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				count;
	unsigned int	num;

	if (!check_base(base))
		return ;
	count = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		num = (unsigned int)(-nbr);
	}
	else
		num = (unsigned int)nbr;
	if (num >= (unsigned int)count)
		ft_putnbr_base(num / count, base);
	ft_putchar(base[num % count]);
}
//
// int	main(void)
// {
// 	ft_putnbr_base(10, "01");
// }
//
