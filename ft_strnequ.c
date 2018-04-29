/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:58:22 by agifford          #+#    #+#             */
/*   Updated: 2018/04/25 21:02:32 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int str_len;

	str_len = 0;
	str_len = ft_strlen(s1);
	if (str_len < n)
		return (NULL);
	while (n > 0 && s1 != '\0')
	{
		if (*s1 != *s2)
			return (0);
		n--;
		s1++;
		s2++;
	}
	return (1);
}
		
