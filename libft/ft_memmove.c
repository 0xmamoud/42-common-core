/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:45:59 by kane              #+#    #+#             */
/*   Updated: 2023/11/09 20:28:56 by kane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destcpy;
	unsigned const char	*srccpy;
	
	destcpy = dest;
	srccpy = src;
	if (destcpy < srccpy)
	{
		while (n > 0)
		{
			*destcpy = *srccpy;
			n--;
			destcpy++;
			srccpy++;
		}
	}
	else
	{
		while (n > 0)
		{
			*destcpy = *srccpy;
			n--;
			destcpy--;
			srccpy--;
		}
	}
	return dest;
}