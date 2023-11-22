/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:22:39 by kane              #+#    #+#             */
/*   Updated: 2023/11/22 23:42:11 by kane             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_findline(t_list *buffer)
{
	int		count;
	t_list	*last;

	if (!buffer)
		return (0);
	last = ft_lstlast(buffer);
	count = 0;
	while (last ->content[count])
	{
		if (last ->content[count] == '\n')
			return (1);
		count++;
	}
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_lstnew(char *src, size_t len, t_list *new)
{
	int		count;

	new = malloc (sizeof(t_list));
	if (!new)
		return ;
	new -> content = malloc(sizeof(char) * (len + 1));
	if (!new -> content)
		return ;
	new -> next = NULL;
	count = 0;
	while (*src && src[count] != '\n')
	{
		new -> content[count] = src[count];
		count++;
	}
	new -> content[count] = '\0';
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst && lst -> next)
		lst = lst -> next;
	return (lst);
}
