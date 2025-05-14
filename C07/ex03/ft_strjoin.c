/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:55:24 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/13 22:56:41 by fbenini-         ###   ########.fr       */
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
	if (size == 0)
		return (1);
	while (i < size)
	{
		result += ft_strlen(strs[i]);
		if (i < size - 1)
			result += ft_strlen(sep);
		i++;
	}
	return (result + 1);
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

	if (size == 0)
	{
		dest = malloc(sizeof(char));
		if (!dest)
			return (NULL);
		return (dest[0] = '\0', dest);
	}
	i = 0;
	len = arr_size(size, strs, sep);
	dest = (char *)malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);
	dest[0] = '\0';
	while (i < size)
	{
		if (i != size - 1)
			ft_strconcat(dest, strs[i++], sep);
		else
			ft_strconcat(dest, strs[i++], "");
	}
	return (dest[len] = '\0', dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*arr[] = {"dasd", "re", "bvc"};
// 	char	*str;
//
// 	str = ft_strjoin(3, arr, "-");
// 	printf("%s", str);
// 	free(str);
// }
