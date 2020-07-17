/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: temaapol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 14:34:45 by temaapol          #+#    #+#             */
/*   Updated: 2020/07/17 08:40:53 by temaapol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
   int res;

   res = 1;
   if((nb == 0 && power != 0)
     {
	   return (0);
	 }
   if((power == 0) || ((nb < 0) && (power == 0)))
     {
        return (1);
	 }

   else
	 {
        while(power > 0)
		{
		  res = nb * result;
		  power++;
	    }
		 return (res);
	 }
			  
} 
