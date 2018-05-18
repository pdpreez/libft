/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:01:01 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/18 18:22:38 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define strfunc ft_strcpy(argv[0], argv[1])

int	main(int argc, char **argv)
{
	printf("ARGV 1 = \t%s\n", argv[0]);
	printf("ARGV 2(dst) = \t%s\n", argv[1]);
	printf("ARGV 3(src) = \t%s\n", argv[2]);
	printf("String Function test result: \t%s\n", ft_strcpy(argv[1], argv[2]));
	printf("Strcpy test result:\t%s\n", strcpy(argv[1], argv[2]));
	return (0);
}
