/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:34:37 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/02 20:37:47 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdlib.h>
#include <stdio.h>

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c && in_word == 1)
			in_word = 0;
		i++;
	}
	return (count);
}
/*int main() {
    char str[] = "jfjd jfj fj";
    printf("%d\n", ft_count_word(str, 'f'));
}*/

static int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*alloc_word(char const *s, char c)
{ 
	char	*word;
	int		len;
	int		i;

	len = word_len(s, c);
	i = 0;
	word = (char *)malloc(word_len(s, c) + 1);
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static int	first_split(char **str, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j] = alloc_word(&s[i], c);
			if (!str[j])
				return (0);
			j++;
			i += word_len(&s[i], c);
		}
		else
			i++;
	}
	str[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;

	i = 0;
	strs = (char **)malloc((ft_count_word(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	if (!first_split(strs, s, c))
	{
		free(strs);
		return (NULL);
	}
	return (strs);
}
int main() {
    char **x = ft_split("aymen anass waissi", ' ');
    int i = 0;

    while(x[i]) {
    	printf("%s\n", x[i]);
	i++;
    }
    return 0;
}
