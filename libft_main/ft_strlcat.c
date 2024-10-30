/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:46:17 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/23 18:06:07 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(dst);
	i = len;
	if (dstsize <= len)
		return (dstsize + ft_strlen(src));
	while (src[len - i] && len + 1 < dstsize)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < dstsize)
	{
		dst[len] = '\0';
	}
	return (i + ft_strlen(src));
}

#include <stdio.h>
int main()
{
	char dst[12] = "omer ";
	const char src[] = "faruk";
	
	size_t res = ft_strlcat(dst, src, sizeof(dst));
	printf("%s\n", dst);
	printf("%zu", res);
}