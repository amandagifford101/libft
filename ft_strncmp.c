/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 19:24:51 by agifford          #+#    #+#             */
/*   Updated: 2018/04/25 19:36:34 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		s1++;
		s2++;
		n--;
	}
		return (s1 - s2);
}

int	main(void)
{
	char fuck[10] = "Hello";
	char shit[10] = "yesplease";
	int a = 0;

	a = ft_strncmp(fuck, shit, 3);
	printf("return of ft_strncmp is %i", a);
	return (0);
}	

