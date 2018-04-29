/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:09:47 by agifford          #+#    #+#             */
/*   Updated: 2018/04/25 20:17:25 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	size_t str_len;

	str_len = 0;
	str_len = ft_strlen(s);
	str = (char*)malloc(str_len);
	if (s != NULL && f != NULL)
	{
		while (s)
		{
			str = (*f)(s);
			s++;
			str++;
		}
		return (str);
	}
}

