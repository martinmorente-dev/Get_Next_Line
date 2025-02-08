/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 09:35:33 by mmorente          #+#    #+#             */
/*   Updated: 2025/02/08 10:31:43 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

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
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	size_t	total_size;

	if (!s1 && !s2)
		return (NULL);
	total_size = ft_strlen(s1) + ft_strlen(s2);
	new_string = (char *)malloc((total_size + 1) * sizeof(char));
	if (!new_string)
		return (NULL);
	ft_memcpy((void *)new_string, s1, ft_strlen(s1));
	ft_memcpy((void *)(new_string + ft_strlen(s1)), s2, ft_strlen(s2));
	new_string[total_size] = '\0';
	return (new_string);
}

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (str[i])
	{
		if (str[i] == cc)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == cc)
		return ((char *) &str[i]);
	return (NULL);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*buff_src;
	unsigned char	*buff_dest;

	buff_src = (unsigned char *)src;
	buff_dest = (unsigned char *)dest;
	while (n > 0)
	{
		*buff_dest = buff_src[0];
		buff_src++;
		buff_dest++;
		n--;
	}
	return (dest);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
