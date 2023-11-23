/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:03:36 by kane              #+#    #+#             */
/*   Updated: 2023/11/23 14:00:38 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h> 
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE  1024
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}	t_list;
char	*get_next_line(int fd);
void	ft_read_fd(int fd, t_list **buffer);
size_t	ft_strlen(const char *s);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_findline(t_list *buffer);
t_list	*ft_lstnew(char *src, size_t len);
t_list	*ft_lstlast(t_list *lst);
#endif