/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:24:48 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/04 16:16:28 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*p;
	unsigned char		*finding;

	p = (unsigned char *)s;
	finding = NULL;
	while (n --)
	{
		if (*p != (unsigned char)c)
			p++;
		else
		{
			finding = p;
			break ;
		}
	}
	return (finding);
}
