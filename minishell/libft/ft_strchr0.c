/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvardany <hvardany@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:27:10 by amsryan           #+#    #+#             */
/*   Updated: 2022/11/16 16:34:06 by hvardany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr0(char *s, int c)
{
	int		i;
	char	*k;
	char	l;

	l = c;
	k = (char *)s;
	i = 0;
	while (k[i] != '\0' && k[i] != l)
		i++;
	if (k[i] == l)
	{
		return (&k[i]);
	}
	return (0);
}