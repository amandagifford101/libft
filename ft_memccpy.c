/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 18:21:12 by agifford          #+#    #+#             */
/*   Updated: 2018/04/23 15:19:57 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

int	main(void)
{
	size_t	n;
	char	fuck[50] = "Go suck a dick.";
	char	yesplease[50];
	int c;
	
	n = 10;
	c = 'a';
	printf("Before memcpy dest: %s", yesplease);
	ft_memccpy(yesplease, fuck, c, n);
	printf("After memcpy dest: %s", yesplease);
	return (0);
}


