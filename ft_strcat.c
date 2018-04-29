/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 11:29:08 by agifford          #+#    #+#             */
/*   Updated: 2018/04/21 20:58:56 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;
	size_t	len_s1;
	size_t	len_s2;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (len_s1 >= len_s2)
	{
		while (len_s2 > 0)			
		{
			s1[i] = s2[j];
			i++;
			j++;
			len_s2--;
		}
		return (s1);
	}
	else
		return (s1);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_strcat(argv[1], argv[2]);
	return (0);
}
