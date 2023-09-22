/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:38:40 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/17 18:02:48 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	table;

	table = 0;
	while (str[table] != '\0')
	{
		if (str[table] < 32 || str[table] > 126)
		{
			return (0);
		}
		table++;
	}
	return (1);
}
/*
int	main()
{
	char 	table[] = "²@£";

	if (ft_str_is_printable(table))
	{
		printf("Passou\n");
	}
	else
	{
		printf("Nao passou\n");
	}
	return (0);
}*/
