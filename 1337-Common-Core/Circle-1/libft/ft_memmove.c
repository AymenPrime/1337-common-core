void *ft_memmove(void *dest, const void *src, size_t n) {
    char *dst = (char *)dest;
    char *sr = (char *)src;
    size_t i;
    if (dst == sr)
        return dst;
        if (dst < sr) {
            i = 0;
        while(i < n) {
            dst[i] = sr[i];
            i++;
            }
        } else {
            i = n;
            while(i > 0) {
                dst[i - 1] = sr[i - 1];
                i--;
            }
        }
}
#include <string.h>
int main() {
    char src[20] = "Hello, World";
    char dest[10];
    ft_memmove(dest, src + 5, 6);
    printf("%s\n", dest);
    memmove(dest, src + 5, 6);
    printf("%s\n", dest);
    return 0;
}