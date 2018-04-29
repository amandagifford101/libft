/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 13:06:56 by agifford          #+#    #+#             */
/*   Updated: 2018/04/25 13:21:28 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	return (s1 - s2);
}

int main(void)
{
	char str2[10] = "hello";
	char str1[10] = "world";
	 int c;

	c = 0;
	c = ft_strcmp(str1, str2);
	printf("c = %i", c);
	return (0);
}
