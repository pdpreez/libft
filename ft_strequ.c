/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:49:48 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/17 16:22:11 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char s[] = "Cunt";
	char s1[] = "Cunt";
	char s2[] = "Cun";

	printf("%d\n", ft_strequ(s, s1));
	printf("%d\n", ft_strequ(s1, s2));
	return (0);
}
