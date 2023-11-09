/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:46:35 by kane              #+#    #+#             */
/*   Updated: 2023/11/09 23:42:49 by kane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;
	
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && *(src + i))
		{
			*(dst + i + dstlen) = *(src + i);
			i++;
		}
		*(dst + i + dstlen) = '\0';
	}
	if (size < dstlen)
		return (srclen + size);
	else
		return (srclen + dstlen);
}