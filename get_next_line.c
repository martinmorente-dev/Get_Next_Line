/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:20:13 by mmorente          #+#    #+#             */
/*   Updated: 2025/01/13 20:11:57 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"



char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd,0,0) < 0)
		return (NULL);

	buffer = 'a'; //read_function(int fd, char *res);
	// check if this function fail (!buffer)
	if (!buffer)
		return (NULL);
	line = 'z';//next_line(char *buffer)
	buffer = 'b';// del_buf(char *buff) eliminate 
}