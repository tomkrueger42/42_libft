/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:47:28 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/09 23:30:14 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*get_next_line(int fd)
{
	static char	*str = NULL;
	static int	end_of_file = 0;
	char		*r;

	r = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || end_of_file == 2)
		return (NULL);
	str = ft_need_for_read(fd, str, &end_of_file);
	if (!str)
		return (NULL);
	if (str && ft_strchr_int(str, '\n') != -1)
	{
		r = ft_substr(str, 0, ft_strchr_int(str, '\n'));
		str = ft_substr_free(str, ft_strchr_int(str, '\n'), ft_strlen(str));
	}
	else if (end_of_file == 1)
	{
		if (ft_strlen(str))
			r = ft_substr_free(str, 0, ft_strlen(str));
		else
			free(str);
		str = NULL;
		end_of_file = 2;
	}
	return (r);
}

char	*ft_need_for_read(int fd, char *str, int *end_of_file)
{
	char	*buf;
	int		read_value;

	while (ft_strchr_int(str, '\n') == -1 && *end_of_file == 0)
	{
		buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (buf == NULL)
			return (NULL);
		ft_bzero(buf, BUFFER_SIZE + 1);
		read_value = read(fd, buf, BUFFER_SIZE);
		if (read_value < 0)
		{
			free(buf);
			return (NULL);
		}
		if (read_value == 0)
			buf[0] = '\0';
		if (ft_strchr_int(buf, '\0') < BUFFER_SIZE && fd != 1)
			*end_of_file = 1;
		if (!str)
			str = ft_substr_free(buf, 0, ft_strlen(buf));
		else
			str = ft_strjoin_free(str, buf);
	}
	return (str);
}
