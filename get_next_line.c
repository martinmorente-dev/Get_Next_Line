/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
/*   Updated: 2025/03/13 18:11:07 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*delete_line_read(char *str)
{
	char	*buff;
	int	count_lbreack;
	int	j;
	
	count_lbreack = 0;
	while (str[count_lbreack] != '\n' && str[count_lbreack])
		count_lbreack++;
	if (!str[count_lbreack])
		return (free(str), NULL);
	j = 0;
	while(str[count_lbreack])
	{
		j++;
		count_lbreack++;
	}
	buff = ft_calloc(j + 1, sizeof(char));
	if (!buff)
	{
		free(buff);
		return (NULL);
	}
	ft_memcpy((void *)buff, &str[count_lbreack], j + 1);
	free(str);
	return (buff);
}

char	*pass_line(char *buffer, char *line)
{
	int	i;

	i = 0;
	if (buffer[0] == 0)
		return (NULL);
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	line = ft_calloc(sizeof(char), (i + 2));
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
		result = ft_calloc(1, sizeof(char));
	byte_read = 1;
	while (byte_read != 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read < 0)
		{
			free(buffer);
			free(result);
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

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_fd(buffer, fd);
	if (!buffer)
		return (NULL);
	line_result = NULL;
	line_result = pass_line(buffer, line_result);
	buffer = delete_line_read(buffer);
	return (line_result);
}
