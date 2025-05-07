#include <stdlib.h>
#include <stdio.h>

int sspace(char c) {
    return (c == ' ' || (c >= 9 && c <= 13)); // spaces and tabs
}

// Corrected ft_strndup: allocate and return a copy of n characters
char *ft_strndup(char *src, int n) {
    char *dest = malloc(n + 1);
    if (!dest) return NULL;
    for (int i = 0; i < n; i++)
        dest[i] = src[i];
    dest[n] = '\0';
    return dest;
}

// Count how many words are in the string
int wd_len(char *s)
{
	int count = 0;
    while (*s)
	{
        while (*s && sspace(*s)) s++; // skip whitespace
        if (*s)
		{
			count++;
			while (*s && !sspace(*s)) s++; // skip word
        }
    }
    return count;
}

char **split(char *s)
{
    int len = wd_len(s);
    char **res = malloc((len + 1) * sizeof(char *));
    if (!res) return NULL;

    int idx = 0;
    while (*s)
	{
        while (*s && sspace(*s)) s++; // skip whitespace
        if (*s)
		{
            char *start = s;
            while (*s && !sspace(*s)) s++;
            int word_len = s - start;
            res[idx++] = ft_strndup(start, word_len);
        }
    }

    res[idx] = NULL;
    return res;
}

int main() {
    char **s = split("   fdsa     dsfa      sdfa");

    for (int i = 0; s[i]; i++) {
        printf("Word[%d]: %s\n", i, s[i]);
        free(s[i]);
    }
    free(s);
    return 0;
}

