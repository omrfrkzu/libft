/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:46:27 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/23 18:05:50 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t a)
{
	size_t	i;

	i = 0;
	while (i < a)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		i++;
		s1++;
		s2++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	const char *s1 = "omer";
	const char *s2 = "oner";

	int res = ft_strncmp(s1, s2, 4);
	printf("%d", res);
}