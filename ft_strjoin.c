/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 21:20:27 by agifford          #+#    #+#             */
/*   Updated: 2018/04/25 21:29:47 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	int str_len1;
	int str_len2;
	char *cpy;

	tot_len = 0;
	tot_len = ft_strlen(s1) + ft_strlen(s2);
	str = (char*)malloc(tot_len);
	cpy = str;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (str_len1 > 0)
	{
		str = *s1;
		str_len--;
		s1++;
		str++;
	}
	while (str_len2 > 0)
	{
		str = *s2;
		str_len2--;
		s2++;
		str++;
	}
	return (cpy);
}
