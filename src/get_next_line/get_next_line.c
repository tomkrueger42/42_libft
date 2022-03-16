/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:47:28 by tkruger           #+#    #+#             */
/*   Updated: 2022/03/16 11:11:37 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <limits.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

/* This function returns the next line of file fd. NULL if fd is empty. Call
get_next_line in a loop to read a file until it returns NULL */
char	*get_next_line(int fd)
{
	static char	*str[OPEN_MAX];
	static int	end_of_file[OPEN_MAX];
	char		*r;

	r = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || end_of_file[fd] == 2)
		return (NULL);
	str[fd] = ft_need_for_read(fd, str[fd], &end_of_file[fd]);
	if (ft_strlen(str[fd]) == 0)
		str[fd] = NULL;
	if (ft_strchr_int(str[fd], '\n') != -1)
	{
		r = ft_substr(str[fd], 0, ft_strchr_int(str[fd], '\n') + 1);
		str[fd] = ft_substr_free(str[fd], ft_strchr_int(str[fd], '\n') + 1,
				ft_strlen(str[fd]) - ft_strchr_int(str[fd], '\n'));
	}
	else
	{
		r = str[fd];
		end_of_file[fd] = 2;
		str[fd] = NULL;
	}
	return (r);
}

char	*ft_need_for_read(int fd, char *str, int *end_of_file)
{
	char	*buf;
	int		read_value;

	read_value = 0;
	while (ft_strchr_int(str, '\n') == -1 && *end_of_file == 0)
	{
		buf = ft_calloc(sizeof(char), BUFFER_SIZE + 1);
		read_value = read(fd, buf, BUFFER_SIZE);
		if (read_value < 0)
		{
			free(buf);
			buf = NULL;
			return (NULL);
		}
		buf[read_value] = '\0';
		if (ft_strchr_int(buf, '\0') + 1 < BUFFER_SIZE && fd != 1)
			*end_of_file = 1 ;
		if (str == NULL)
			str = buf;
		else
			str = ft_strjoin_free(str, buf);
	}
	return (str);
}
