/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 14:47:28 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/07 18:21:36 by tkruger          ###   ########.fr       */
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
	str = ft_need_for_read(fd, str, &end_of_file, 0);
	if (!str)
		return (NULL);
	if (str && ft_strchr_int(str, '\n') >= 0)
	{
		r = ft_substr(str, 0, ft_strchr_int(str, '\n'));
		str = ft_strtail_free(str, ft_strchr_int(str, '\n'));
	}
	else if (end_of_file == 1)
	{
		if (ft_strlen(str))
			r = ft_strtail_free(str, 0);
		else
			free(str);
		str = NULL;
		end_of_file++;
	}
	return (r);
}

char	*ft_need_for_read(int fd, char *str, int *end_of_file, int rv)
{
	char	*buf;

	while (!ft_strchr_int(str, '\n') && *end_of_file == 0)
	{
		buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (buf == NULL)
			return (NULL);
		ft_bzero(buf, BUFFER_SIZE + 1);
		rv = read(fd, buf, BUFFER_SIZE);
		if (rv < 0)
		{
			free(buf);
			return (NULL);
		}
		if (rv == 0)
			buf[0] = '\0';
		if (ft_strchr_int(buf, '\0') < BUFFER_SIZE && fd != 1)
			*end_of_file = 1;
		if (!str)
			str = ft_strtail_free(buf, 0);
		else
			str = ft_strjoin_free(str, buf);
	}
	return (str);
}

char	*ft_strtail_free(const char *s1, int c)
{
	char	*p;
	int		n;
	int		i;

	i = 0;
	n = ft_strlen(s1);
	p = malloc(n - c + 1);
	if (p == NULL)
		return (NULL);
	while (i <= n - c)
	{
		p[i] = s1[i + c];
		i++;
	}
	free((void *)s1);
	return (p);
}
