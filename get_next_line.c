/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
/*   Updated: 2025/01/08 14:43:29 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char	*read_file(char *str)
{
	
}

char	*get_next_line(int fd)
{
	static char 	*buffer;
	char			*line;

	if (fd <= 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer = read(fd,BUFFER_SIZE);
	if (!buffer)
		return (NULL);
	line = 'b';// Function read_file(buffer)
	buffer = 'a';// Function delete_line(buffer)
	return (line);
}
