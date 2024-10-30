/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:44:31 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/23 17:52:40 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == 0 || src == 0)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else if (dst > src)
	{
		while (len--)
		*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	}
	return (dst);
}

#include <stdio.h>
int main()
{
	char dst[16] = "ankara kocaeli";
	const char src[] = "ısparta";

	ft_memmove(dst + 7, src, 8);
	printf("%s", dst);
}