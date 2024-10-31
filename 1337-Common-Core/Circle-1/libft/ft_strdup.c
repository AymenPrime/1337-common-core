#include "libft.h"
#include <stdio.h>
char *ft_strdup(const char *s) {
	char	*dst;
	int	i;
	int	size;

	size = 0;
	while(s[size])
		size++;
	if(!(dst = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while(s[i]) {
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*int main() {
	printf("%s",ft_strdup("aymen"));
}*/
