/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
/*   Updated: 2025/02/02 10:32:15 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	delete_line_read(char *str, size_t n)
{
	unsigned char	*buff;

	buff = (unsigned char *)str;
	while (n > 0)
	{
		*buff = '\0';
		buff++;
		n--;
	}
}


char	*read_fd(char *result, int fd)
{
	int	byte_read;
	char	*buffer;
	
	buffer = ft_calloc(BUFFER_SIZE, sizeof(char *));	
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	if (!result)
		result = ft_calloc(1, sizeof(char *));
	byte_read = 0;
	while (byte_read >= 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[byte_read] = 0;
		result = ft_strjoin(buffer, result);
		if (ft_strchr(result, '\n'))
			break;
	}
	free(buffer);
	return (result);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line_result;

	line_result = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_fd(buffer, fd);
	if (!buffer)
		return (NULL);
	line_result = ft_memcpy(line_result, buffer, BUFFER_SIZE);
	delete_line_read(buffer, BUFFER_SIZE);
	return (line_result);
}
