/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:11:27 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/30 12:38:44 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= src_len)
		return (size + src_len);
	i = 0;
	while (src[i])
	{
		if (i > size - src_len)
			break ;
		dest[i + dest_len] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	return (src_len + dest_len);
}
/*
// para rodar a função original compile com o comando gcc ./ft_strlcat.c -lbsd
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char myStr[20] = "felipeee";
	char myStr2[20] = "felipeee";
	int n_orig = strlcat(myStr, "benini", 5);
	int n_replica = ft_strlcat(myStr2, "benini", 5);
	printf("Original:%s %d\n", myStr, n_orig);
	printf("Replica: %s %d", myStr2, n_replica);
}*/
