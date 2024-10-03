#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	str = (char *)malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != 0)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != 0)
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	str[j] = 0;
	return (str);
}
