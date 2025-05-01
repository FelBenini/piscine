/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:00:14 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/30 15:08:37 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_has_occurence(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	count;

	i = 0;
	count = 0;
	len = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = 0;
		while (j < len)
		{
			if (str[i + j] == to_find[j])
				count++;
			j++;
		}
		if (count == len)
			return (count == len);
		else
			count = 0;
		i++;
	}
	return (count == len);
}

unsigned int	ft_find_occurence(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;
	unsigned int	count;

	i = 0;
	count = 0;
	len = ft_strlen(to_find);
	while (i < ft_strlen(str))
	{
		j = 0;
		while (j < len)
		{
			if (str[i + j] == to_find[j])
				count++;
			j++;
		}
		if (count == len)
			return (i);
		else
			count = 0;
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	pos;

	if (!ft_has_occurence(str, to_find))
		return (0);
	pos = ft_find_occurence(str, to_find);
	return (&str[pos]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	char	*to_find;

	str = "The rain in Spain falls mainly on the plains";
	to_find = "";
	printf("Réplica: %s\n", ft_strstr(str, to_find));
	printf("Original: %s", strstr(str, to_find));
	return (0);
}*/
