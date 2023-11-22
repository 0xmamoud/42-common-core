/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kane <kane@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:07:40 by kane              #+#    #+#             */
/*   Updated: 2023/11/23 00:23:03 by kane             ###   ########.fr       */
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
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ft_read_fd(fd, &buffer);
	if (!buffer)
		return (NULL);
	while (buffer && buffer -> next)
		buffer = buffer -> next;
	printf("test");
	line = NULL;
	linelen = ft_strlen(buffer -> content);
	line = (char *) malloc(sizeof(char) * (linelen + 1));
	if (!line)
		return (NULL);
	count = 0;
	while (buffer -> content[count])
	{
		line[count] == buffer -> content[count];
		count++;
	}
	line[count] = '\0';
	return (line);
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
		{
			free(temp);
			return ;
		}
		temp[bytes] = '\0';
	}
	ft_lstnew(temp, ft_strlen(temp), new);
	ft_lstadd_back(buffer, new);
	free(temp);
}
int main()
{
	int fd = open("./test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
}
