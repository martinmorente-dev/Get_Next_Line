/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
/*   Updated: 2025/02/01 09:47:36 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *read_fd(char *result, int fd)
{
	int	byte_read;
	char	*buffer;
	
	buffer = ft_calloc(BUFFER_SIZE, sizeof(char *));	
	if (!buffer)
	{
		free(buffer);
		return (NULL);	
	}
	if (!result);
		ft_calloc(BUFFER_SIZE, sizeof(char *));
	while (true)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[byte_read] = 0;
	}
}

char *get_next_line(int fd)
{
	static char	*buffer;
	char		*line_result;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = 'a'; //TODO read_fd(char *buffer, int fd)
	if (!buffer)
		return (NULL);
	line_result = 'a'; //TODO pass_line(char *buffer, *line_result)
	buffer = 'a'; // TODO delete_line_read(char *buffer)
	return (line_result);
}
