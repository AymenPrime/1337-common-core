#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	ft_atoi(char *str);
void	ft_bzero(void *b, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *s, int c, size_t n);
static int	ft_count_word(char const *s, char c);
static int	word_len(char const *s, char c);
static char	*alloc_word(char const *s, char c);
void	free_split(char **strs);
char	**ft_split(char const *s, char c);
char	*ft_strrchr(const char *s, int c);
size_t 	ft_strlcat(char *dest, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s);
int	ft_tolower(int c);
int	ft_toupper(int c); 

#endif
