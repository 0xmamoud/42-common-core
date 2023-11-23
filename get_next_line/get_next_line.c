/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkane <mkane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:07:40 by kane              #+#    #+#             */
/*   Updated: 2023/11/23 14:11:38 by mkane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "get_next_line_utils.c"
#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static t_list	*buffer;
	size_t			linelen;
	int				count;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ft_read_fd(fd, &buffer);
	if (!buffer)
		return (NULL);
	while (buffer && buffer -> next)
		buffer = buffer -> next;
	count = 0;
	return (buffer -> content);
}

void	ft_read_fd(int fd, t_list **buffer)
{
	int		bytes;
	char	*temp;
	t_list	*new;

	bytes = 1;
	while (bytes != 0 && !ft_findline(*buffer))
	{
		temp = (char *) malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!temp)
			return ;
		bytes = (int)read(fd, temp, BUFFER_SIZE);
		if (bytes == -1 || (bytes == 0 && !*buffer))
			break ;
		temp[bytes] = '\0';
		new = malloc (sizeof(t_list));
		if (!new)
			return ;
		new = ft_lstnew(temp, ft_strlen(temp));
		ft_lstadd_back(buffer, new);
		bytes = 0;
	}
	free(temp);
}
int main()
{
	int fd = open("./test.txt", O_RDONLY);
	
	char *test0 = get_next_line(fd);
	printf("%s\n", test0);
	char *test1 = get_next_line(fd);
	printf("%s\n", test1);
}
