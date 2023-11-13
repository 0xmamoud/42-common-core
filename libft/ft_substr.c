/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:47:23 by mkane             #+#    #+#             */
/*   Updated: 2023/11/13 22:04:27 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = NULL;
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		*str = '\0';
		return (str);
	}
	s += start;
	while (*s && i < len)
	{
		*(str + i) = (char)*s;
		s++;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
