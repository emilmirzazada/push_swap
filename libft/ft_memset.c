/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emirzaza <emirzaza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:36:05 by emirzaza          #+#    #+#             */
/*   Updated: 2023/05/15 20:10:51 by emirzaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned int len)
{
	char		*p;

	p = str;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (str);
}
