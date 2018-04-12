/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmelen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 17:49:11 by thmelen           #+#    #+#             */
/*   Updated: 2018/02/15 14:44:04 by thmelen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')
		&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
		&& !(str[i - 1] >= '0' && str[i - 1] <= '9')
		&& ((str[i] >= 'a' && str[i] <= 'z')
		|| (str[i] >= 'A' && str[i] <= 'Z')))
			str[i] -= 32;
		i++;
	}
	return (str);
}
