/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:54:01 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/16 13:59:00 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
	int res;
	int j;

	res = 1;
	j = 0;
	if (b <= 0 || nb > 12)
	{
	  return (0);
	}
    if (nb == 1)
	{
	 return (1);
	}
    while( j <= nb)
	{
	   res = j * res;
       i++;
	}
   return (res);
}   
