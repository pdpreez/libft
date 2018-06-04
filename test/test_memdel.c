/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 12:19:45 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/24 12:57:49 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	char *ptr;

	if (!(ptr = (char *)malloc(sizeof(ptr) * ft_strlen(argv[1] + 1))))
		return (1);
	memcpy(ptr, argv[1], ft_strlen(argv[1]));
	ft_putstr(ptr);
	ft_putchar('\n');
	ft_strdel(ptr);
	ft_putendl("am i still being called????");
	return (0);
}
