/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:58:14 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/13 18:24:00 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	char	n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	return (n);
}
/*
#include <stdio.h>

int	main()
{
	char	*str;

	str = "valdeilson";
	ft_strlen (str);
	printf("%d", ft_strlen (str));
	return (0);
}*/
