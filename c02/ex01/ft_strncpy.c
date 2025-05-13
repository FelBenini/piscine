/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:37:35 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/13 16:05:24 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
//
// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "punana";
// 	char	dest[] = "bananada de marmelo";
// 	ft_strncpy(dest, src, 3);
// 	printf("%s\n%s\n", src, dest);
// }
