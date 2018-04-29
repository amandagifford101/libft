/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agifford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 15:53:14 by agifford          #+#    #+#             */
/*   Updated: 2018/04/21 21:01:52 by agifford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strdup(const char *str)
{
	int i;
	int j;
	char *ptr;
	
	i = 0;
	j = 0;
	ptr = (char*)malloc(sizeof(char) * ft_strlen(str));
	while (str[i]) 
		ptr[j++] = str[i++];
	return (ptr);
}
