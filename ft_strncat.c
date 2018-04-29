/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 12:37:02 by agifford          #+#    #+#             */
/*   Updated: 2018/04/21 21:02:55 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int j;
	int	str1_len;
	int	str2_len;
	
	j = 0;
	i = 0;
	str1_len = 0;
	str2_len = 0;
	str1_len = ft_strlen(s1);
	str2_len = ft_strlen(s2);
	if (str1_len >= str2_len)
	{
		while (n > 0)
		{
			s1[i] = s2[j];
			i++;
			j++;
			n--;
		}
		return (s1);
	}
	else
		return (s1);
}	
