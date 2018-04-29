/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 21:28:04 by agifford          #+#    #+#             */
/*   Updated: 2018/04/28 15:11:25 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t j;
	size_t k;
	char	*str;
	
	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return (ft_strcpy(ft_memalloc(i), s);
		 
	j = ft_strlen(s) - 1;
	while (s[j] == ' '|| s[j] == '\n' || s[j] == '\t')
		j--;
	str = (char*)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}

int main(void)
{
	char *fuck = "   Hello   ";
	
	ft_strtrim(fuck);
	printf("%s", fuck);
	return (0);
}

