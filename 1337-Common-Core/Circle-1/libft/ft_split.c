/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 20:34:37 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/04 20:39:07 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
static char	*alloc_word(char const *s, char c)
{
	char	*word;
	int		len;
	int		i;
	int		j;

	j = 0;
	while (s[j] && s[j] != c)
		j++;
	i = 0;
	word = (char *)malloc(j + 1);
	if (!word)
		return (NULL);
	while (i < j)
	{
		word[i] = s[i];
		i++;
	}
	word[j] = '\0';
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
			while(s[i] && s[i] != c)
				i++;
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
// int	main(void)
// {
// 	char	**x;
// 	int		i;

// 	x = ft_split("-----aymen----anass------waissi----------", '-');
// 	i = 0;
// 	while (x[i])
// 	{
// 		printf("%s\n", x[i]);
// 		i++;
// 	}
// 	return (0);
// }