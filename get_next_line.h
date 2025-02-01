/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 14:24:23 by mmorente          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/01/26 12:33:06 by mmorente         ###   ########.fr       */
=======
/*   Updated: 2025/02/01 09:37:35 by mmorente         ###   ########.fr       */
>>>>>>> f4fc63b (Update + Create)
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

char  *get_next_line(int fd);
void  *ft_calloc(size_t count, size_t size);

#endif
