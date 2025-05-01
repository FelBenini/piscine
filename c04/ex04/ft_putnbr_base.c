/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 14:33:49 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/30 17:37:12 by fbenini-         ###   ########.fr       */
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
	int	count;
	int	num;

	num = nbr;
	if (!check_base(base))
		return ;
	count = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		num = nbr * -1;
	}
	if (num >= 0 && num <= count)
	{
		ft_putchar(base[num]);
	}
	if (num / count != 0)
	{
		ft_putnbr_base(num / count, base);
		ft_putnbr_base(num % count, base);
	}
}
/*
int	main(void)
{
	ft_putnbr_base(10, "poneyvif");
}
*/
