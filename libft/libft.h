#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *str1, const char *str2, size_t a);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_atoi(const char *str);

char	*ft_strchr(const char *src, int a);

#endif