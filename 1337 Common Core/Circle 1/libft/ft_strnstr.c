#include <stdio.h>
#include <string.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len) {
	size_t fix;
	size_t j;
	fix = 0;

	if(!needle)
		return ((char *)haystack);
	while(haystack[fix] && fix < len) {
		j = 0;
		while(haystack[fix + j] == needle[j] 
				&& haystack[fix + j] && (fix + j) < len)
			j++;
		if(needle[j] == '\0')
			return ((char *)&haystack[fix]);
		fix++;
	}
		return 0;

}

int main() {
	char hs[] = "hellomynameisSlimShady";
	char nl[] = "myname";
	printf("%s", ft_strnstr(hs, nl, 7));
}
