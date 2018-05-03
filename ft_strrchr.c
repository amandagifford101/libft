/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 22:12:31 by agifford          #+#    #+#             */
/*   Updated: 2018/05/02 01:23:33 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (s[i])
	{
		if (c == s[i])
			return ((char *)s + i);
		else 
			i--;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}
