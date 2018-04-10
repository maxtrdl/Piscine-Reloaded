/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrudel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:33:43 by mtrudel           #+#    #+#             */
/*   Updated: 2016/11/03 19:02:13 by mtrudel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER 4096

void	ft_putchar_error(int c)
{
	write(2, &c, 1);
}

void	ft_putstr_error(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		ft_putchar_error(src[i]);
		i++;
	}
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		ft_putchar(src[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUFFER + 1];

	if (argc > 2)
	{
		ft_putstr_error("Too many arguments.\n");
		return (0);
	}
	if (argc < 2)
	{
		ft_putstr_error("File name missing.\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUFFER)) != 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
