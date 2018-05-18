/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 16:36:45 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/16 17:08:11 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dst,char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

int main(void)
{
	char *src = "test";
	char dst[4];

	printf("ft_strcpy %s\n", ft_strcpy(dst, src));
	printf("strcpy %s\n", strcpy(dst, src));
	return (0);
}
