/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:11:44 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/30 16:27:00 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	ft_putstr("Test string : ");
	ft_putstr(argv[1]);
	ft_putstr("\n\n");
	ft_bzero(argv[1], ft_strlen(argv[1]));
	ft_putstr("After ft_bzero function call :\n");
	ft_putstr(argv[1]);
	return (0);
}
