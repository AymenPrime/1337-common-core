//#include <stdio.h>
#include <string.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size) {
	unsigned int i;
	unsigned int len;

	len = strlen(src);
	i = 0;
	while (src[i] && i < size -1) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return len;
}

/*int main() {
	char dst[20];
	char src[] = "Hello, ";	
	printf("%d\n", ft_strlcpy(dst, src, 10));
	printf("%s\n", dst);
}*/
