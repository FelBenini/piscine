/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:49:23 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/30 17:41:00 by fbenini-         ###   ########.fr       */
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
	return (0);
}

int	ft_raisenum(int num, int exponent)
{
	int	i;
	int	result;

	i = 1;
	result = num;
	if (exponent == 0)
		return (1);
	while (i < exponent)
	{
		result *= num;
		i++;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	result;
	int	i;
	int	str_len;
	int	negative;

	result = 0;
	i = 0;
	negative = 1;
	if (!check_base(base))
		return (0);
	len = ft_strlen(base);
	str_len = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == '-')
			negative *= -1;
		else if (str[i] == '+' || str[i] == ' ')
			negative *= 1;
		else
			result += (find_pos(base, str[i])) * ft_raisenum(len,
					str_len - i - 1);
		i++;
	}
	return (result * negative);
}
/*int	main(void)
{
	printf("%d", ft_atoi_base("    --+-14", "0123456789ABCDEF"));
}*/
