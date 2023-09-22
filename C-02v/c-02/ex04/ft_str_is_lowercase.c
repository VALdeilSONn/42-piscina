/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:54:13 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/18 14:21:39 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha])
	{
		if (str[alpha] >= 'a' && str[alpha] <= 'z')
		{
			alpha++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char 	alp[] = "abcdefghijklmnopqrstuvwxyz";

	if (ft_str_is_lowercase(alp))
	{
		printf("Passou\n");
	}
	else
	{
		printf("Nao passou\n");
	}
	return (0);
}*/
