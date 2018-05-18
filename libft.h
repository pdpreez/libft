/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppreez <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 15:14:11 by ppreez            #+#    #+#             */
/*   Updated: 2018/05/18 17:59:47 by ppreez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#	define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c);
void	ft_putstr(char *s);
char	*ft_strcpy(char *dst, const char *src);
size_t	ft_strlen(const char *s);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);


#endif
