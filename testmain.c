/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:01:01 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/19 11:36:51 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("arg 1 / dst = \t%s\n", argv[1]);
	printf("arg 2 / src = \t%s\n", argv[2]);
	printf("String function test result : %s", strncpy(argv[1], argv[2], 6));
	return (0);
}
