/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperronc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:31:17 by mperronc          #+#    #+#             */
/*   Updated: 2016/02/11 17:44:15 by mperronc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fs;
	char	*res;

	fs = (char *)malloc(sizeof(char) * ft_strlen(s + 1));
	if (fs == NULL)
		return (NULL);
	res = fs;
	while (*s != 0)
	{
		*fs = (*f)(*s);
		fs++;
		s++;
	}
	*fs = 0;
	return (res);
}
