/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfelida <mfelida@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:19:39 by mfelida           #+#    #+#             */
/*   Updated: 2023/10/27 17:45:29 by mfelida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		ft_putstr_fd("(null)", fd);
	write(fd, s, ft_strlen(s));
}
