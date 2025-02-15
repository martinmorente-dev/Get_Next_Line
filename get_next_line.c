/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
/*   Updated: 2025/02/15 11:05:00 by mmorente         ###   ########.fr       */
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

char	*pass_line(char *buffer, char *line)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	line = ft_memcpy(line, buffer, i);
	return (line);
}

char	*read_fd(char *result, int fd)
{
	int		byte_read;
	char	*buffer;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char ));
	if (!buffer)
		return (NULL);
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

	line_result = ft_calloc(1, sizeof(char ));
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_fd(buffer, fd);
	if (!buffer)
		return (NULL);
	line_result = pass_line(buffer, line_result);
	delete_line_read(buffer, ft_strlen(line_result));
	return (line_result);
}
