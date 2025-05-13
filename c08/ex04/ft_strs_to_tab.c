/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:22:13 by fbenini-          #+#    #+#             */
/*   Updated: 2025/05/13 16:06:43 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(ft_strlen(src) + 1 * sizeof(char));
	if (!str)
		return (0);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*dict;
	int			i;

	i = 0;
	dict = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (!dict)
		return (0);
	while (i < ac)
	{
		if (&dict[i] == 0)
			return (0);
		dict[i].size = ft_strlen(av[i]);
		dict[i].str = av[i];
		dict[i].copy = ft_strdup(av[i]);
		if (dict[i].str == 0 || dict[i].copy == 0)
			return (0);
		i++;
	}
	dict[i].str = 0;
	return (dict);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*arr[] = {"dadsa", "bvb", "bvcnbvnc"};
// 	t_stock_str *dict = ft_strs_to_tab(3, arr);
// 	int	i = 0;
// 	while (i < 3)
// 	{
// 		printf("%s\n", dict[i].copy);
// 		i++;
// 	}
// }
