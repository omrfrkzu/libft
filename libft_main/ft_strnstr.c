/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:38:37 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/23 18:05:52 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		pos;

	if (*needle == '\0')
		return ((char *)haystack);
	pos = ft_strlen((char *)needle);
	while (*haystack != '\0' && len-- >= pos)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, pos) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

#include <stdio.h>
int main()
{
	const char *hay = "omer faruk kuzu";
	const char *nee = "faruk";
	
	char *res = ft_strnstr(hay, nee, 15);
	printf("%s", res);
}