/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 13:58:14 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/28 14:42:14 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	ft_putstr("Test string before trim = ");
	ft_putstr(argv[1]);
	ft_putchar('\n');
	ft_putstr("Test string after trim = ");
	printf("%s", ft_strtrim(argv[1]));
	return (0);
}
