#include "libft.h"
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *ptr;

	i = 0;
	j = start;
	ptr = malloc(len + 1);
	if(ft_strlen(s) < start + len)
	{
		return (NULL);
	}
	while(i < len)
	{
		ptr[i] = s[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}

int main()
{
	printf("%s", ft_substr("hello world", 10, 1));
}