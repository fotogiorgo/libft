/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:54:42 by jofoto            #+#    #+#             */
/*   Updated: 2023/10/27 20:08:01 by jofoto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	res = (char *)malloc(len + 1);
	if (res == NULL || s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		*res = 0;
		return (res);
	}
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
