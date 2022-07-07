/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:27:17 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/04 16:16:58 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (size != 0 && i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	if (i < size)
		dest[i] = 0;
	while (src[i] != '\0')
		++i;
	return (i);
}
