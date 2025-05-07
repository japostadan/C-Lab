#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int sspace(char s)
{
	return (s == ' ' || (s >= 9 && s <= 13));
}

char *ft_strndup(char *src,int len)
{
	char *dest = malloc(len + 1);
	for(int i = 0;i < len; i++)
		dest[i] = src[i];
	dest[len] = '\0';
	return dest;
}

int arr_len(char *s)
{
	int i = 0;
	while(*s)
	{
		while(*s && sspace(*s)) s++;
		if(*s)
		{
			i++;
			while(*s && !sspace(*s)) s++;
		}
	}
	return i;
}

char **split(char *s)
{
	char **res=NULL;
	char *start;
	int len = arr_len(s);
	int i = 0;

	res = malloc((len + 1) * sizeof(char *));
	while(*s)
	{
		while(*s && sspace(*s))s++;
		if(*s)
		{
			start = s;
			while(*s && !sspace(*s)) s++;
			int word_len  = s - start;
			res[i++] = ft_strndup(start, word_len);
		}
	}
	res[len] = NULL;
	return res;
}

int main()
{
	char **s = split("      one  two   three");
	for(int i = 0;s[i];i++)
	{
		printf("word[%d] -> %s\n",i,s[i]);
		free(s[i]);
	}
	free(s);
}
