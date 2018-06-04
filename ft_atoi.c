/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:03:04 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/28 10:31:39 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	diglen(const char *str, int i)
{
	size_t len;

	len = 0;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]))
			len++;
		i++;
	}
	return (len);
}

static int	conv(const char *str, int i, int m)
{
	size_t	a;

	a = 0;
	if (diglen(str, i) > 19 && m == 1)
		return (-1);
	if (diglen(str, i) > 19 && m == -1)
		return (0);
	while (ft_isdigit(str[i]))
	{
		a *= 10;
		a += str[i] - '0';
		i++;
	}
	return (a);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		m;
	int		a;

	i = 0;
	m = 1;
	if (ft_strlen(str) == 0 || !str)
		return (0);
	while (ft_isspace(str[i]) || str[i] == '0')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i - 1] == '0')
			return (0);
		if (str[i] == '-')
		{
			m = -1;
		}
		i++;
	}
	a = conv(str, i, m) * m;
	return (a);
}
