/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsryan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:19:39 by amsryan           #+#    #+#             */
/*   Updated: 2022/11/22 14:19:41 by amsryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strindex(char *s, int x, int y)
{
	int	i;

	i = 0;
	if (!s || !*s)
		return (0);
	while (*s && *s != x && *s != y)
	{
		i++;
		s++;
	}
	return (i);
}