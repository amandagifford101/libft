/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:21:12 by agifford          #+#    #+#             */
/*   Updated: 2018/05/02 01:22:14 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*s;
	char 	*d;
	
	d = (char*)dst;
	s = (char*)src;
	while (--n)
	{
		if (*s == c)	
			return((void*)src + 1);
		*d = *s;
		d++;
		s++;
	}
	return ((void*)dst);
}
