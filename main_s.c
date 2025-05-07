#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int sspace(char s)
{
	return (s == ' ' || (s >= 9 && s <= 13));
}
int res_len(char *s)
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

char *ft_strndup(char *s,int n)
{
	char *d = malloc(n + 1);
	for(int i=0; i < n; i++)
		d[i] = s[i];
	d[n] = '\0';
	return d;
}
char **split(char *s)
{
	char **res = NULL;
	char *start;
	int i = 0;
	int len = res_len(s);

	res = malloc((len + 1) * sizeof(char *));
	if(!res) return NULL;
	while(*s)
	{
		while(*s && sspace(*s)) s++;
		start = s;
		if(*s)
		{
			while(*s && !sspace(*s)) s++;
			int wl= s - start;
			res[i++] = ft_strndup(start, wl);
		}
	}
	res[len] = '\0';
	return res;
}

int main()
{
	char **s= split("      one two  	 	three");
	for(int i = 0; s[i];i++)
	{
		printf("word[%d] -> %s\n",i,s[i]);
		free(s[i]);
	}
	free(s);
}
