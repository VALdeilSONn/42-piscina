/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 14:24:26 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/20 18:47:20 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	alpha;

	alpha = 0;
	while (str[alpha])
	{
		if ((str[alpha] >= 'a' && str[alpha] <= 'z')
			|| (str[alpha] >= 'A' && str[alpha] <= 'Z'))
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
	char 	alp[] = "";

	if (ft_str_is_alpha(alp))
	{
		printf("%d", ft_str_is_alpha(alp));
	}
	else
	{
		printf("%d", ft_str_is_alpha(alp));
	}
	return (0);
}
*/
