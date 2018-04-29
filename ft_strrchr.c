/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 22:12:31 by agifford          #+#    #+#             */
/*   Updated: 2018/04/21 22:28:52 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (s[i])
	{
		if (c == s[i])
			return ((char *)s + i);
		else 
			i--;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (NULL);
}


int	main(int argc, char **argv)
{
	int	nbr;
	char *fuck;
	
	nbr = 48;
	fuck = NULL;
	if (argc == 2)
		strrchr(argv[1], nbr);
	fuck = strrchr(argv[1], nbr);
	printf("%s", fuck);
	return (0);
}
