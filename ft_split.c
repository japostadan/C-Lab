/*Assignment name  : ft_split                                                     */
/*Expected files   : ft_split.c                                                   */
/*Allowed functions: malloc                                                       */
/*--------------------------------------------------------------------------------*/
/*                                                                                */
/*Write a function that takes a string, splits it into words, and returns them as */
/*a NULL-terminated array of strings.                                             */
/*                                                                                */
/*A "word" is defined as a part of a string delimited either by spaces/tabs/new   */
/*lines, or by the start/end of the string.                                       */
/*                                                                                */
/*Your function must be declared as follows:                                      */
/*                                                                                */
/*char    **ft_split(char *str);                                                  */


#include <stdlib.h>

int word_len(char *s)
{
    int i = 0;
    while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
        ++i;
    return i;
}
char *dup(char *s)
{
    int i = 0;
    char *word;
    int len = word_len(s);
    word =malloc(sizeof(char) * i + 1);
    while(i < len)
    {
        word[i] = s[i];
        ++i;
    }
    return word;
}

void fill(char **arr, char *s)
{
    int i = 0;
    while (*s == ' ' || *s == '\t' || *s == '\n')
        ++s;
    while (*s != '\0')
    {
        arr[i] = dup(s);
        ++i;
        while (*s != '\0' && *s != ' ' && *s != '\t' && *s != '\n')
            ++s;
        while (*s == ' ' || *s == '\t' || *s == '\n')
            ++s;
    }
}
int wd_len(char *s)
{
    int i = 0;
    while (*s == ' ' || *s == '\t' || *s == '\n')
        ++s;
    while (*s != '\0')
    {
        ++i;
        while (*s != '\0' && *s != ' ' && *s != '\t' && *s != '\n')
            ++s;
        while (*s == ' ' || *s == '\t' || *s == '\n')
            ++s;
    }
    return i;
}

char **ft_split(char *s)
{
    int len =0;
    char **res;
    len = wd_len(s);
    res =malloc(sizeof(char *) * (len + 1));
    res[len] = 0;
    fill(res,s);
    return res;
}

#include <stdio.h>

int main()
{
    char **s;

    s = ft_split("this is a test");
    printf("%s\n", s[0]);
    printf("%s\n", s[1]);
    printf("%s\n", s[2]);
    printf("%s\n", s[3]);
}
