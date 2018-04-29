/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 11:25:16 by agifford          #+#    #+#             */
/*   Updated: 2018/04/20 11:25:26 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_len(int n)
{
		int i;
		int negative;
		int len;
		int	neg_len;
		int len_one;

		i = 0;
		len = 0;
		if (n == '-')
			negative = 1;
		while ((n > 10) || (n < -10))
		{
			n = (n / 10);
			i++;
		}
	//	i++;
		len_one = 1;
		len = i + 1;		//NULL Char
		neg_len = i + 2;		//NULL + negative sign
		if (n == 0)
			return (len_one);
		else if (negative == 1)
			return (neg_len);
		else
			return (len);
}
