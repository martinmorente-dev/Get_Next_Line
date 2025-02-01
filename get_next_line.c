/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/26 12:42:27 by mmorente         ###   ########.fr       */
=======
/*   Updated: 2025/02/01 09:47:36 by mmorente         ###   ########.fr       */
>>>>>>> f4fc63b (Update + Create)
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD

char	*read_file(int fd, char *result)
=======
char *read_fd(char *result, int fd)
>>>>>>> f4fc63b (Update + Create)
{
	int	byte_read;
	char	*buffer;
<<<<<<< HEAD
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
=======

	buffer = ft_calloc(BUFFER_SIZE,sizeof(char *));	
	if (!buffer)
	{
		free(buffer);
		return (NULL);	
	}
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
>>>>>>> f4fc63b (Update + Create)
{
	static char	*buffer;
	char		*line_result;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
<<<<<<< HEAD
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = 'a';// TODO Pass what is read to the function
	buffer = 'a';// TODO Delete the line that was read
	return (line);
}
=======
	buffer = 'a'; //TODO read_fd(char *buffer, int fd)
	if (!buffer)
		return (NULL);
	line_result = 'a'; //TODO pass_line(char *buffer, *line_result)
	buffer = 'a'; // TODO delete_line_read(char *buffer)
	return (line_result);
}
>>>>>>> f4fc63b (Update + Create)
