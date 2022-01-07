/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkruger <tkruger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:35:45 by tkruger           #+#    #+#             */
/*   Updated: 2022/01/07 18:44:49 by tkruger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include "includes/libft.h"

int	main(void)
{
	FILE	*o;
	int		i;
	char	*cp = "S";
	
	o = fopen("output.txt", "w");
	i = open("input.txt", O_RDONLY);

	while (cp)
	{
		cp = get_next_line(i);
		fprintf(o, "%s", cp);
		printf("%s", cp);
		free(cp);
	}
	fclose(o);
	close(i);
	return (0);
}
