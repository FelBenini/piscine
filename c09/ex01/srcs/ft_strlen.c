/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:15:06 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/18 11:03:55 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

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
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	//para testar, passe a palavra com o programa compilado
	// exemplo: ./a.out "banana"
	char	*palavra;
	if (argc < 2)
		printf("Por favor passe uma palavra");
	palavra = argv[1];
	printf("A contagem para %s é %d", palavra, ft_strlen(palavra));
}
*/
