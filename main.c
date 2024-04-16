/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pibernar <@student.42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:13:22 by pibernar          #+#    #+#             */
/*   Updated: 2024/04/16 13:25:38 by pibernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
# include <fcntl.h>
# include <stdio.h>  


int	main(void)
{
	int	fd;
	char 	*filename;
	char	*next_line;

	filename = "test.txt";
	fd = open(filename,O_RDONLY);
	//Test for text output
	while((next_line = get_next_line(fd)))
		printf("%s",next_line);
	
	//Test for NULL return
	next_line = get_next_line(fd);
	printf("%s", next_line);
	close (fd);
	return (0);
}
