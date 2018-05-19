/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:24:40 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/19 11:27:00 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	ft_strclr(dst);
	while (src[i] != '\0' && i <= len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

