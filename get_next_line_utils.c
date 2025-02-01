/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:29:34 by mmorente          #+#    #+#             */
/*   Updated: 2025/01/26 12:31:23 by mmorente         ###   ########.fr       */
=======
/*   By: mmorente <mmorente@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 09:35:33 by mmorente          #+#    #+#             */
/*   Updated: 2025/02/01 09:37:17 by mmorente         ###   ########.fr       */
>>>>>>> f4fc63b (Update + Create)
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

<<<<<<< HEAD
void	*ft_calloc(size_t	count, size_t size)
{
	unsigned char	*temp;
	size_t			i;
=======

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t		i;
>>>>>>> f4fc63b (Update + Create)

	i = 0;
	temp = malloc(count * size);
	if (!temp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
<<<<<<< HEAD
}
=======
}
>>>>>>> f4fc63b (Update + Create)
