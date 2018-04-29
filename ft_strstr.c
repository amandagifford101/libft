/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 22:30:42 by agifford          #+#    #+#             */
/*   Updated: 2018/04/21 23:09:44 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		check_all(const char *str1, const char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] == str2[j])
		{
			while (str1[i] == str2[j])
			{
				j++;
				if (str2[j] == '\0')
					return(1);
				else
				{
					j = 0;
					i++;
					j++;
				}
			}
		}
		else 
			i++;
	}
	return (0);
}
			
char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	char *ptr;

	i = 0;
	ptr = 0;
	if (!needle[i])
		return ((char*)haystack);
	while (haystack[i] != '\0')
	{
		if (check_all(haystack, needle) == 1)
		{

			return ((char*)ptr + i);
		else
			i++;
	}
	return (NULL);
}		



int	main(int argc, char **argv)
{
	char *fuck;

	fuck = NULL;
	if (argc == 3)
		ft_strstr(argv[1], argv[2]);
	fuck = ft_strstr(argv[1], argv[2]);
	printf("haystack: %s needle: %s result: %s", argv[1], argv[2], fuck);
	return (0);
}
