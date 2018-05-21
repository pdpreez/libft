/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:01:01 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/21 13:50:47 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int a;

	a = 0;
	printf("arg 1 = \t%s\n", argv[1]);
	printf("arg 2 = \t%s\n", argv[2]);
	printf("%d\n", strncmp(argv[1], argv[2], 4));
	printf("%d", ft_strncmp(argv[1], argv[2], 4));
	return (0);
}
