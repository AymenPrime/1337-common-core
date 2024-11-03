/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-our <aait-our@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 20:38:07 by aait-our          #+#    #+#             */
/*   Updated: 2024/11/02 23:14:10 by aait-our         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	len(int num)
{
	int	i;

	i = 0;
	if (num == 0)
		i = 1;
	if (num < 0)
	{
		i = 1;
		num = -num;
	}
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

/*int main() {
	int nb = -4546;
	printf("%d\n", len(nb));
}*/

char	*ft_itoa(int nb)
{
	int		i;
	int		leng;
	int		n;
	char	*new;

	leng = len(nb);
	new = (char *)malloc(leng + 1);
	if (nb < 0)
		n = -nb;
	else
		n = nb;
	i = leng - 1;
	while (i >= 0)
	{
		new[i] = (n % 10) + '0';
		n /= 10;
		if (nb < 0 && i == 0)
			new[i] = '-';
		i--;
	}
	return (new);
}

int	main(void)
{
	int	nb;

	nb = -4546;
	printf("%s\n", ft_itoa(nb));
}
