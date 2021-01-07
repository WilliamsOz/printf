/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_missing_conv.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiozsert <wiozsert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:13:55 by wiozsert          #+#    #+#             */
/*   Updated: 2021/01/06 12:37:15 by wiozsert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		strcmp_missing_conv(const char *src, char *conv, int i, int j)
{
	while (src[i] != '\0')
	{
		while (src[i] != '\0' && conv[j] != '\0' && src[i] != conv[j])
			j++;
		if (src[i] == conv[j] && conv[j] != '\0')
			return (i + 1);
		else
		{
			j = 0;
			i++;
		}
	}
	return (-1);
}
