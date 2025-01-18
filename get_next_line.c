/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
/*   Updated: 2025/01/18 12:31:53 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char	*read_function(int fd, char *res)
{
	char	*buffer;
	int		byte_read;

	if (!res)
		return (NULL);
	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read <= 0)
			return (NULL);
	}
}


char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd,0,0) < 0)
		return (NULL);
	buffer = read_function(fd,buffer);
	// check if this function fail (!buffer)
	if (!buffer)
		return (NULL);
	line = 'z';//next_line(char *buffer)
	buffer = 'b';// del_buf(char *buff) eliminate 
}