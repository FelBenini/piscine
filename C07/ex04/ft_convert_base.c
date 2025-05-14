/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:59:48 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/13 22:44:45 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	check_base(char *base);
int	ft_strlen(char *str);

int	intlen(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*rev_str(char *str, int start)
{
	char	tmp;
	int		i;
	int		end;

	i = 0;
	end = ft_strlen(str) - 1;
	while (start + i < (start + end + 1) / 2)
	{
		tmp = str[start + i];
		str[start + i] = str[end - i];
		str[end - i] = tmp;
		i++;
	}
	return (str);
}

char	*convert_int_to_base(char *result, char *base, int nbr)
{
	int		i;
	int		base_len;
	int		start;

	i = 0;
	start = 0;
	base_len = ft_strlen(base);
	if (result[i] == '-')
		start = 1;
	while (nbr > 0)
	{
		result[start + i++] = base[nbr % base_len];
		nbr = nbr / base_len;
	}
	result[start + i] = '\0';
	rev_str(result, start);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_t)
{
	int		nb;
	char	*result;

	if (!check_base(base_from) || !check_base(base_t))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	if (nb < 0)
	{
		nb *= -1;
		result = (char *)malloc(sizeof(char) * (intlen(nb) + 2));
		result[0] = '-';
	}
	else
		result = (char *)malloc(sizeof(char) * (intlen(nb) + 1));
	if (nb == 0)
	{
		result[0] = '0';
		result[1] = '\0';
	}
	else
		convert_int_to_base(result, base_t, nb);
	return (result);
}
//
// int	main(void)
// {
// 	printf("%s", ft_convert_base("-A", "0123456789ABCDEF", "01"));
// }
