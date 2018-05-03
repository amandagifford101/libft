/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 15:39:17 by agifford          #+#    #+#             */
/*   Updated: 2018/05/02 01:17:47 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
		
char	*ft_itoa(int n)
{
	char	*str;
	int 	negative;
	int		len;
	
	negative = 0;
	len = int_len(n);
	str = (char*)malloc(sizeof(char) * len);
	if (n == '-')
		negative = 1;
	str[len] = 0;
	len--;
	while (n > 10)
	{
		str[len] = (n % 10) + '0';
		n = (n / 10);	
		len--;
	}
	while (n < -10)
	{
		str[len] = (n % 10) + '0';
		n = (n / 10);
		len--;
	}
	str[len] = n + '0';
	if (negative == 1)
	{
		len--;
		str[len] = '-';
		return (str);
	}
	else
			return (str);
}
