/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 21:27:55 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/04 16:16:53 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(s) + 1;
	while (i < length)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}
