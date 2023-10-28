/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:13:57 by jofoto            #+#    #+#             */
/*   Updated: 2023/10/27 20:09:19 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (dstsize && dst && src)
	{
		while (dstsize - 1 > 0 && *src != 0)
		{
			*dst = *src;
			dst++;
			src++;
			dstsize--;
		}
		*dst = 0;
	}
	return (src_size);
}
