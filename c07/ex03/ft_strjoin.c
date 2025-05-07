/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:55:24 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/06 18:49:03 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	arr_size(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		result += ft_strlen(sep);
		i++;
	}
	return (result);
}

void	ft_strconcat(char *dest, char *src, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	j = 0;
	while (sep[j])
		dest[i++] = sep[j++];
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = arr_size(size, strs, sep);
	dest = malloc(sizeof(char) * len);
	while (i < size)
	{
		if (i != size - 1)
			ft_strconcat(dest, strs[i], sep);
		else
			ft_strconcat(dest, strs[i], "");
		i++;
	}
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*arr[] = {"dasd", "dasd", "agr"};
// 	char	*str;
//
// 	str = ft_strjoin(3, arr, "-");
// 	printf("%s", str);
// 	free(str);
// }
