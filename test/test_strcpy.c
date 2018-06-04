/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:18:51 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/25 10:30:37 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(int argc, char **argv)
{
	ft_putstr("argv 1 = ");
	ft_putstr(argv[1]);
	ft_putchar('\n');
	ft_putstr("argv 2 = ");
	ft_putstr(argv[2]);
	ft_putchar('\n');
	ft_strcpy(argv[1], argv[2]);
	ft_putstr("Argv 1 after copy: ");
	ft_putstr(argv[1]);
	return (0);
}
