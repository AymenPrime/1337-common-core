#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n) {
	size_t i;
	if(n == 0) {
		return 0;
	}
	i = 0;
	while(i < n) {
		if(s1[i] != s2[i]) {
			return s1[i] - s2[i];
		}
		if(s1[i] == '\0') {
			return 0;
		}
	i++;
	}
	return 0;
}

int main() {
	char s1[] = "aymen";
	char s2[] = "abmen";
	printf("%d", ft_strncmp(s1, s2, 1));
}
