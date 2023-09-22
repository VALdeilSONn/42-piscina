/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:42:50 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/20 18:03:24 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 65 && str[y] <= 90)
		{
			str[y] = str[y] + 32;
		}
		y++;
	}
	str[y] = '\0';
	return (str);
}
/*
int	main() {
	char	src[] = "TESTIZA1, VALDEILSON.";

	ft_strlowcase(src);

	printf("%s\n", src);

	return 0;
}*/
