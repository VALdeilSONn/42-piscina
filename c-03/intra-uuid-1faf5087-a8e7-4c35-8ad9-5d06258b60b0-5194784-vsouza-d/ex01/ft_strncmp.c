/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsouza-d <vsouza-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:03:44 by vsouza-d          #+#    #+#             */
/*   Updated: 2023/09/21 03:58:05 by vsouza-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	 main(void)
{
	char	s1[] = "Hygor";
	char	s2[] = "HyGOR";

	printf("%i\n", ft_strncmp(s1, s2, 3));
	return (0);
}
