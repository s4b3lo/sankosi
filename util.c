/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmuntada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/09 17:37:26 by qmuntada          #+#    #+#             */
/*   Updated: 2015/04/09 17:37:34 by qmuntada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		one_of(char c, char *str)
{
	int		i;

	if (str == NULL || c == '\0')
		return (0);
	i = -1;
	while (str[++i])
		if (c == str[i])
			return (1);
	return (0);
}