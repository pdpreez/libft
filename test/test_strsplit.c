/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 17:13:36 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/31 17:21:25 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

static size_t	wordcount(char const *s, char c)
{
	size_t i;
	size_t wc;

	wc = 0;
	while (s[i])
	{
		if ((s[i + 1] == c || s[i + 1] == '\0') && s[i] != c)
			wc++;
		i++;
	}
	return (wc);
}

int	main(int argc, char **argv)
{
	int	i;
	char **split;

	i = 0;
	printf("Test string = %s\n", argv[1]);
	split = ft_strsplit(argv[1], argv[2][0]);
	printf("%zu\n", wordcount(argv[1], argv[2][0]));
	while (i < wordcount(argv[1], argv[2][0]))
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
