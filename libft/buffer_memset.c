/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:40:13 by wiozsert          #+#    #+#             */
/*   Updated: 2021/01/06 12:36:00 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	buffer_memset(char *buffer, size_t b_size)
{
	size_t	i;

	i = 0;
	while (i < b_size)
	{
		buffer[i] = '\0';
		i++;
	}
}
