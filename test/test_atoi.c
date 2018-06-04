/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:03:51 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/30 17:38:42 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	ft_putstr("Argument count : ");
	ft_putnbr(argc - 1);
	ft_putchar('\n');
	printf("Std atoi function = %d\n", atoi(argv[1]));
	printf("My atoi function = %d", ft_atoi(argv[1]));
	return (0);
}
