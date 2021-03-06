/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:18:55 by mrubio            #+#    #+#             */
/*   Updated: 2020/07/27 20:12:02 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd)
	{
		while (*s != '\0')
		{
			write(fd, &*s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}
