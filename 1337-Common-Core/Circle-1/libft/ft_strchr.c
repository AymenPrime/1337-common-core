

#include "libft.h"
#include <stdio.h>
//#include <string.h>
char *ft_strchr(const char *s, int c) {

        int     i;

        i = 0;
        while(s[i]) {
                if(s[i] == (char)c)
                        return (char *)&s[i];
                i++;
        }
        return 0;
}
/*int main() {
        char *result = ft_strchr("", 'n');
        char *result1 = strchr("", 'n');
        printf("%s\n", result);
        printf("%s", result1);
}*/
