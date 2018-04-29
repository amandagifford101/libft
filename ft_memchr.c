/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 20:11:52 by agifford          #+#    #+#             */
/*   Updated: 2018/04/23 20:15:33 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	char *str;

	str = (char*)s;
	i = 0;
	while (n > 0)
	{
		if (str[i] == c)
			return (str + n);
		n--;
		i++;
	}
	return (NULL);
}
