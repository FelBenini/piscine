/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:07:15 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/13 17:07:44 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	find_pos(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == to_find)
			return (i);
		i++;
	}
	return (-1);
}

int	convert_from_base(int *result, char *base, char *str, int i)
{
	int	digit;
	int	len;

	len = ft_strlen(base);
	while (str[i])
	{
		digit = find_pos(base, str[i]);
		if (digit == -1)
			break ;
		*result = *result * len + digit;
		i++;
	}
	return (*result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	negative;

	result = 0;
	i = 0;
	negative = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	convert_from_base(&result, base, str, i);
	return (result * negative);
}
