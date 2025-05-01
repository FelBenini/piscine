/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 14:24:58 by fbenini-          #+#    #+#             */
/*   Updated: 2025/04/21 17:11:42 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_value_in_string(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	char	*possible_characters;
	int		i;

	i = 0;
	possible_characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (str[i] != '\0')
	{
		if (!ft_is_value_in_string(str[i], possible_characters))
			return (0);
		i++;
	}
	return (1);
}
