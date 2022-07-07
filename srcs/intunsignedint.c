/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intunsignedint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsalin <lsalin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 15:51:49 by lsalin            #+#    #+#             */
/*   Updated: 2022/07/07 13:16:02 by lsalin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	numberlength(unsigned int number)
{
	int	length;

	length = 1;
	while (number > 9)
	{
		number = number / 10;
		length++;
	}
	return (length);
}

static char	*itoa(unsigned int number)
{
	char	*string;
	int		length;

	length = numberlength(number);
	string = (char *)malloc(length + 1 * sizeof(char));
	if (string == NULL)
		return (NULL);
	string[length] = '\0';
	while (length > 0)
	{
		string[--length] = number % 10 + '0';
		number = number / 10;
	}
	return (string);
}

void	ifint(t_print *arg_count)
{
	char	*string;
	int		result;

	result = va_arg(arg_count->args, int);
	string = ft_itoa(result);
	ft_putstr_fd(string, 1);
	arg_count->counter += ft_strlen(string);
	free(string);
}

void	ifunsignedint(t_print *arg_count)
{
	char			*string;
	unsigned int	result;

	result = va_arg(arg_count->args, unsigned int);
	string = itoa(result);
	ft_putstr_fd(string, 1);
	arg_count->counter += ft_strlen(string);
	free(string);
}
