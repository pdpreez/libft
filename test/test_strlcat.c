/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 13:49:40 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/26 14:02:43 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("Dst string is = %s\n", argv[1]);
	printf("Src string is = %s\n", argv[2]);
	printf("Dstsize is = %d\n", ft_atoi(argv[3]));
	ft_strlcat(argv[1], argv[2], ft_atoi(argv[3]));
	printf("New string is = %s\n", argv[1]);
	return (0);
}
