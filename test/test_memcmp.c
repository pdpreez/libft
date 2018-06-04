/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 18:04:20 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/30 18:08:54 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	printf("First argument : %s\n", argv[1]);
	printf("Second argument : %s\n", argv[2]);
	printf("Third argument : %s\n\n", argv[3]);

	printf("Std comparison : %d\n", memcmp(argv[1], argv[2], ft_atoi(argv[3])));
	printf("My Comparison = %d", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}
