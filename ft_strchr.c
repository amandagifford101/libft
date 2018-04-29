/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 13:56:45 by agifford          #+#    #+#             */
/*   Updated: 2018/04/22 01:03:14 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	 i;
	
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
	//		write(1, &c, 1);
			return ((char*)s + i);
		}
		else 
			i++;
	}
	if (c == '\0')
	//	write(1, &c, 1);
		return ((char*)s + i);
	return (NULL);
}


int	main(int argc, char **argv)
{
	int 	nbr;
	char	*fuck;
	
	nbr = '\0';		//trying to check if it will return NULL
	fuck = NULL;
	if (argc == 2)
		fuck = ft_strchr(argv[1], nbr);
	if (fuck[0] == '\0')
		printf("fuck[0] = NULL");
	return (0);
}
