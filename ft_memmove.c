/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 15:21:25 by agifford          #+#    #+#             */
/*   Updated: 2018/04/23 19:45:14 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char   *s;
	char   *d;
	size_t len_s;
	size_t len_d;

	s = (char*)src;
	d = (char*)dst;
	len_s = ft_strlen(s);
	len_d = ft_strlen(d);
	while (--len)
	{
		if (len_s >= len_d + len)	
		{
			*d = *s;
			d++;
			s++;
		}
		else
			return ((void*)dst);
	}
	return((void*)dst);
}
