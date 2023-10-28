/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:33:24 by jofoto            #+#    #+#             */
/*   Updated: 2023/10/27 20:08:29 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest <= src)
		return (ft_memcpy(dest, src, len));
	else
	{
		dest += len;
		while (len > i)
		{
			dest--;
			*(unsigned char *)dest = *(unsigned char *)(src + len - i - 1);
			i++;
		}
	}
	return (dest);
}
