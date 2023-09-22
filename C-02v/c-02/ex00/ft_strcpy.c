/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:29:17 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/17 12:11:18 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*loop;

	loop = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (loop);
}
/*
int	main()
{
	char	src[] = "valdeilson";
	char	dest[11];
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}*/
