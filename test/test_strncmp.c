/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 08:33:13 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/24 08:37:34 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	int i;

	i = 4;
	putnbr(ft_strncmp(argv[1], argv[2]));
	ft_putnbr(ft_strncmp(argv[1], argv[2]));
	return (0);
}
