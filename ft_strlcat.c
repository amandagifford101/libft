/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 22:16:22 by agifford          #+#    #+#             */
/*   Updated: 2018/04/28 19:20:12 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	size_t len_src;
	size_t len_dst;
	len_src = ft_strlen(src);
	while (dst[i] != '\0')
		i++;
	while (i < len_src + dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	
}
