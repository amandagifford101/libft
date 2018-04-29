/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 20:17:34 by agifford          #+#    #+#             */
/*   Updated: 2018/04/25 20:35:06 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char *ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char *str;
	int i;
	int str_len;

	str_len = ft_strlen(s);
	i = 0;
	str = (char*)malloc(str_len);
	if (s != NULL && f != NULL)
	{
		while (s)
		{
			str = (*f)(i, s);
			s++;
			str++;
			i++;
		}
	return (str);
}
