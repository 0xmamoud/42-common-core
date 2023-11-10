/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:50:15 by kane              #+#    #+#             */
/*   Updated: 2023/11/10 13:54:34 by kane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	
	src = (unsigned char*)s;
	while (n > 0)
	{
		if (*(src) == (unsigned char)c)
			return (src);
		n--;
		src++;
	}
	return (NULL);
}