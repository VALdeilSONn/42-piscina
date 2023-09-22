/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:17:33 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/17 17:26:11 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		if (str[num] < 48 || str[num] > 57)
		{
			return (0);
		}
		num++;
	}
	return (1);
}
/*
int	main()
{
	char 	num[] = "01234";

	if (ft_str_is_numeric(num))
	{
		printf("Passou\n");
	}
	else
	{
		printf("Nao passou\n");
	}
	return (0);
}*/
