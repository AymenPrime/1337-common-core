#include <string.h>
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    size_t    k;
    char    *r;

    r = (char *)malloc(sizeof(*s) * (len + 1));
    if (!r)
        return (NULL);
    i = 0;
    k = 0;
    while (s[i])
    {
        if (i >= start && k < len)
        {
            r[k] = s[i];
            k++;
        }
        i++;
    }
    r[k] = '\0';
    return (r);
}
char    *ft_strtrim(char const *s1, char const *set) {
    
    int     start;
    int     end;
    char    *result;

    if (!s1 ||  !set)
        return NULL;
    start = 0;
    while (s1[start] && strchr(set, s1[start])) {
        start++;
    }
    end = strlen(s1);
    while (start < end && strchr(set, s1[end - 1])) {
        end--;
    }
    
    result = ft_substr(s1, start, end - start);
    
    return result;
}

int main() {
  printf("%s\n", ft_strtrim("@@@---a-yme@@n--@@--", "@-"));
  }