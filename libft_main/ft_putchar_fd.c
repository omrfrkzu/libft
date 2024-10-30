/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:32:38 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/29 16:29:23 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main()
{
	ft_putchar_fd('c', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('?', 1);
	return (0);
}