/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 12:10:06 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/05 12:15:30 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

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

char	*ft_strdup(char *s)
{
	char	*copy;

	copy = malloc(ft_strlen(s) + 1);
	if (copy)
		ft_strcpy(copy, s);
	return (copy);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Por favor, passe um argumento: ./a.out ´Exemplo´");
		return (1);
	}
	char *source = argv[1];
	char *target = ft_strdup(source);

	printf("%s", target);
    return (0);
}*/
