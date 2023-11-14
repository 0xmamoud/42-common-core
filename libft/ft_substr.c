/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:47:23 by mkane             #+#    #+#             */
/*   Updated: 2023/11/14 15:56:21 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	str = (char *) ft_calloc((len + 1), sizeof(char));
	if (len >= ft_strlen(s))
		str = (char *) ft_calloc((ft_strlen(s) - start + 1), sizeof(char));
	if (!str || !s)
		return (NULL);
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
