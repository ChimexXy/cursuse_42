#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while(s[i])
    {
        i++;
    }
    return (i);
}

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i;
    size_t j;
    char *ptr;

    i = start;
    j = 0;
    ptr = malloc(len);
    while(j < len)
    {
        ptr[j] == s[i];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return (ptr);
}

int main()
{
    printf("%s\n", ft_substr("Hello", 1, 4));
}