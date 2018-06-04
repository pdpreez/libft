/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 12:15:30 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/25 12:27:35 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	ft_putstr("String 1 = ");
	ft_putstr(argv[1]);
	ft_putchar('\n');
	ft_putstr("String 2 = ");
	ft_putstr(argv[2]);
	ft_putchar('\n');
	printf("%s", ft_strstr(argv[2], argv[1]));
	return (0);
}
