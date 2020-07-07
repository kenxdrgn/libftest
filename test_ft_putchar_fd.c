/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jliew <jliew@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 13:47:23 by jliew             #+#    #+#             */
/*   Updated: 2020/07/07 14:22:27 by jliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "../includes/libft.h"

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		printf("------------------------------------\n");
		printf(" void ft_putchar_fd(char c, int fd)\n");
		printf("------------------------------------\n");
	}
	else
	{
		char	c;
		int		fd;

		c = argv[1][0];
		printf("c: %c\n", c);
		fd = open("file", O_WRONLY | O_CREAT | S_IRUSR | S_IWUSR);
		if (fd == -1)
			printf("open failed\n");
		ft_putchar_fd(c, fd);
		if (close(fd) == -1)
			printf("close failed\n");
	}
}
