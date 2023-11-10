/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:33:33 by kane              #+#    #+#             */
/*   Updated: 2023/11/10 21:11:49 by kane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*alloc;
	
	alloc = NULL;
	if (nmemb == 0 || size == 0)
		return (NULL);
	alloc = malloc(nmemb * size);
	if (!alloc)
        return NULL;
	ft_bzero(alloc, nmemb * size);
	return (alloc);
}