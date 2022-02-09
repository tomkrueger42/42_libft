/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomkrueger <tomkrueger@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:47:28 by tkruger           #+#    #+#             */
/*   Updated: 2022/02/09 16:44:27 by tomkrueger       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	static char	*str = NULL;
	static int	end_of_file = 0;
	char		*r;

	r = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || end_of_file == 2)
		return (NULL);
	str = ft_need_for_read(fd, str, &end_of_file);
	if (ft_strchr_int(str, '\n') != -1)
	{
		r = ft_substr(str, 0, ft_strchr_int(str, '\n'));
		str = ft_substr_free(str, ft_strchr_int(str, '\n'),
				ft_strlen(str) - ft_strchr_int(str, '\n'));
	}
	else
	{
		r = str;
		end_of_file = 2;
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
		if (ft_strchr_int(buf, '\0') < BUFFER_SIZE && fd != 1)
			*end_of_file = 1 ;
		if (str == NULL)
			str = buf;
		else
			str = ft_strjoin_free(str, buf);
	}
	return (str);
}
