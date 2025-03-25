#include <stdio.h>
#include <stdlib.h>

int ft_len(char *s)
{
    int i = 0;
    if(!s)
        return 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char *ft_strdup(char *src)
{
    char *s;
    int len = ft_len(src);
    int i = 0;
    s = (char *)malloc(sizeof(char) * len + 1);
    if (!s)
        return NULL;
    while (src[i])
    {
        s[i] = src[i];
        i++;
    }
    s[i] = '\0';
    return s;
}
int main()
{
    char *s;
    s = ft_strdup("test");
    printf("test\n");
    printf("%s\n",s);
    return 0;
}

