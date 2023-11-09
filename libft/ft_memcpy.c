/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 20:18:25 by mkane             #+#    #+#             */
/*   Updated: 2023/11/09 14:04:47 by kane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	const char	*srccpy;
	
	destcpy = dest;
	srccpy = src;
	while (n > 0)
	{
		*destcpy = *srccpy;
		n--;
		destcpy++;
		srccpy++;
	}
	return dest;
}