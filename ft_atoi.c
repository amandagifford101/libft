/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:20:35 by agifford          #+#    #+#             */
/*   Updated: 2018/05/01 22:27:41 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int nbr;
	int negative;

	i = 0;
	while(str[i])
	{
		if (str[i] == '-')
			negative = 1;
		while (str[i] >= '0' && str[i] <= '9')
		{
			nbr = (nbr * 10) + (str[i] - '0');
			i++;
		}
	}
	if (negative == 1)
			return (-nbr);
	else
			return (nbr);
}
