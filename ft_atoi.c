/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 08:41:16 by chhoflac          #+#    #+#             */
/*   Updated: 2023/11/09 16:30:02 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

 static int      ft_pass_empty(const char *nptr)
 {
          int     i;
  
         i = 0;
 20         while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\v'
 21                 || nptr[i] == '\n' || nptr[i] == '\f' || nptr[i] == '\r')
 22                 i++;
 23         printf("%d\n", i);
 24         return(i);
 25 }
 26 
 27 static int      ft_transform(const char *nptr, int key)
 28 {
 29         int     nb;;
 30 
 31         while(nptr[key] >= '0' && nptr[key] <= '9')
 32         {
 33                 nb = nb * 10 + (nptr[key] - '0');
 34                 key++;
 35         }
 36         return(nb);
 37 }
 38 
 39 int     ft_atoi(const char *nptr)
 40 {
 41         int     i;
 42         int     mult;
 43         int     cnt;
 44         int     nb;
 45 
 46         mult = 1;
 47         cnt = 0;
 48         i = ft_pass_empty(nptr);
 49         while (nptr[i] == '-' || nptr[i] == '+')
 50         {
 51                 if (nptr[i] == '-')
 52                         mult = -1;
 53                 i++;
 54                 cnt++;
 55         }
 56         if (cnt > 1)
 57                 return(0);
 58         nb = ft_transform(nptr, i);
 59         return (nb * mult);
 60 }
