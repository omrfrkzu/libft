/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:13:53 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/23 18:00:59 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

#include "libft.h"
void	test(unsigned int i, char *s)
{
	(void)i;
	*s += 1;
}

int main()
{
	char s[] = "omer";
	ft_striteri(s, test);
	ft_putendl_fd(s, 1);
}