#include "libft.h"
#include <stdio.h>

size_t ft_strlen(char const *str)
{
    size_t i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t m;
    char *ptr;

    i = 0;
    j = 0;
    m = 0;
    ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    while(s1[i])
    {
        ptr[m] = s1[i];
        i++;
        m++;
    }
    while(s2[j])
    {
        ptr[m] = s2[j];
        m++;
        j++;
    }   
    ptr[m] = '\0';
    return (ptr);
}

int main()
{
    printf("%s\n", ft_strjoin("\0hello", NULL));
}