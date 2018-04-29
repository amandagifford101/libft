/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 21:02:46 by agifford          #+#    #+#             */
/*   Updated: 2018/04/25 21:20:14 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	char *plc;

	str = (char*)malloc(len);
	plc = str;
	while (len > 0)
	{
		str(start) = *s;
		str(start)++;
		s++;
		len--;
	}
	return (plc);
}
