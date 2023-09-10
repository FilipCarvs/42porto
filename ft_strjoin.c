#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;
    
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_give_memory(int size, char **strs, char *sep)
{
	char	*str;
	int		l;
	int		i;

	l = 0;
	i = 0;
	while (i < size)
		l += ft_strlen(strs[i++]);
	l += (ft_strlen(sep) * size - 1);
	if (size <= 0)
		l = 1;
	if (!(str = (char *)malloc(sizeof(char) * l)))
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_give_memory(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			str[k++] = sep[j++];
	}
	str[k] = '\0';
	return (str);
}