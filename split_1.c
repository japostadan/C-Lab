#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char **split(char *s) {
    int i = 0, count = 0;
    char **result = NULL;
    char *start;

    // First pass: count words
    while (s[i]) {
        while (isspace(s[i])) i++; // skip whitespace
        if (s[i]) {
            count++;
            while (s[i] && !isspace(s[i])) i++; // skip word
        }
    }

    result = malloc((count + 1) * sizeof(char*));
    if (!result) return NULL;

    i = 0;
    int idx = 0;
    while (*s) {
        while (isspace(*s)) s++; // skip whitespace
        if (*s) {
            start = s;
            while (*s && !isspace(*s)) s++;
            int len = s - start;
            result[idx] = malloc(len + 1);
            if (!result[idx]) return NULL;
            strncpy(result[idx], start, len);
            result[idx][len] = '\0';
            idx++;
        }
    }

    result[idx] = NULL;
    return result;
}

#include <stdio.h>

int main()
{
	char **s;
	s = split("           adfs sfda fsd     ");
	for(int i =0; s[i]; i++)
	{
		printf("Word[%d]: %s\n", i,s[i]);
		free(s[i]);
	}
	free(s);

	return 0;

}
