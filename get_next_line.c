/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
/*   Updated: 2025/01/26 12:42:27 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*read_file(int fd, char *result)
{
	char	*buffer;
	int		byte_read;
	
	if(!result)
		result = ft_calloc(BUFFER_SIZE + 1, sizeof(char *));
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	byte_read = read(fd, buffer, sizeof(char));
	if (byte_read = -1)
	{
		free (buffer);
		return (NULL);
	}
	while(byte_read > 0)
	{
		buffer[byte_read] = 0;
		// TODO rest of the function read
	}
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = 'a';// TODO Pass what is read to the function
	buffer = 'a';// TODO Delete the line that was read
	return (line);
}